#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
 
#include "Customer_info.h"
using std::cin; using std::cout; using std::endl; using std::domain_error; using std::max; using std::setw;
using std::setprecision; using std::sort; using std::streamsize; using std::string; using std::vector;
int main(){ 
    vector<Customer_info> customers;
    Customer_info record;
    string::size_type maxlen = 0;
   /* cout << "enter name followed by costs \n"; 
    cout << "e.g., Smith 1 2 3 4   (in some computer to finish: hit enter and then ctrl+d)\n";
    cout << "output: Smith 1 2 3 4\n";*/

    while (read(cin, record)){
        maxlen = max(maxlen, record.name.size());
        customers.push_back(record);
    }
    //sort customer's list by name in descending order (see the function called 'compare' defined in Customer_info.h)
    sort(customers.begin(),customers.end(),compare);
    for(int i=0;i<customers.size();++i)
    {
        cout<<customers[i].name<<' ';
        for(int j =0;j<customers[i].items.size();j++)
        {
            cout<<customers[i].items[j]<<' ';
        }
        cout<<endl;
    }
    
    //write two loops 
    // the outer loop displays the name
    // the inner loop displays the prices
    // remember to use the size_type associated to vector<type> instead of using an integer

      
    return 0;
}