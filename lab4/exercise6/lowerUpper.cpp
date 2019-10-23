// WRITE YOUR NAME AND STUDENT NUMBER
//ian berigan 17428946


#include <iostream>
#include <vector>
#include <string>
#include "lowerUpper.h"
#include <cctype>

using namespace std;

// complete the function to get the desired result
// notice that you will return two vectors
// one is a reference as seen in the parameter list
// the other is the vector called "lower"

vector<string> lower(vector<string>& words){
  vector<string> lower;
  for(int i=0;i<words.size();++i)
  {
      bool check=true;
      string str=words[i];
      for(int j=0;j<str.size();++j)
      {
          if(isupper(str[j]))
          {
              check=false;
          }
      }
      if(check)
      {
          lower.push_back(words[i]);
          words[i]="";
          check=true;
      }
  }
  return lower;
}
