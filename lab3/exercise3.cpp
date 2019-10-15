 #include <algorithm>
 #include <iomanip>
 #include <ios>
 #include <iostream>
 #include <stdexcept>
 #include <string>
 #include <vector>
 #include <numeric>
 using namespace std;
 int main()
 {
     vector<double> v;
     double input;
     cout<<"Please enter numbers you want to find average of: ";
     while(cin>>input)
        v.push_back(input);

    double average = accumulate(v.begin(),v.begin(), 0.0)/v.size(); 
    cout <<"The average is"<<average<<endl;
    return 0;
 }