#include <iostream>
#include<algorithm>
#include<iomanip>
#include<iostream>
#include<ios>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int sum=0;
    for(int i=1;i<9;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }

    }
    cout<<sum<<endl;
    return 0;
    
}