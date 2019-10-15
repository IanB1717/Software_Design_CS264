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
    int square;
     for(int i=-100;i<=100;++i)
    {
     square=i*i;
     cout<<i<<setw(7)<<square<<endl;
    }
    return 0;
}
