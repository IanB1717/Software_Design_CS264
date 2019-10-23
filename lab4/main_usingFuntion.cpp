#include <vector>
#include <iostream>
using namespace std;

istream& read_hw(istream& is, vector<double>& homework){
  if (is){
    double x;
    homework.clear();
    while (is >> x)
      homework.push_back(x);
    is.clear();
  }
  return is;
}

int main(){
  vector<double> hw;
  read_hw(cin, hw);
  cout << "displaying hw content" << endl;
  for (vector<double>::size_type i = 0; i < hw.size(); ++i)
    cout << hw[i] << " ";
  cout << endl;
  return  0;
} 
