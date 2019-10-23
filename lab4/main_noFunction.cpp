#include <vector>
#include <iostream>

using namespace std;

int main(){
  vector<double> hw;
  double x;
  while (cin >> x)
    hw.push_back(x);
  cout << "displaying hw content" << endl;
  for (vector<double>::size_type i = 0; i < hw.size(); ++i)
    cout << hw[i] << " ";
  cout << endl;
  return  0;
} 
