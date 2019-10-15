#include <algorithm>
 #include <iomanip>
 #include <ios>
 #include <iostream>
 #include <stdexcept>
 #include <string>
 #include <vector>
 #include <numeric>
 using namespace std;
int main(){
    double square;
    double l = 0.1;
     for(double i=-100.0;i<=99.0;i+=0.1)
    {
     square=i*i;
     cout<<i<<setw(30)<<square<<endl;
    }
    return 0;
}
