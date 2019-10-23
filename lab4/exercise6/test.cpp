// WRITE YOUR NAME AND STUDENT NUMBER
//ian berigan 17428946

// DO NOT MODIFY THIS CODE

#include <iostream>
#include <string>
#include <vector>
#include "split.h"
#include "lowerUpper.h"

using namespace std;

int main() {
  string s;
  vector<string> words;

  while (getline(cin, s)) {
    words = split(s);  
  }
 
  vector<string> uppercaseWords;
  vector<string> lowercaseWords;

  //you must write the function lower defined in lowerUpper.cpp
  lowercaseWords = lower(words);
  uppercaseWords = words;

  cout << "Uppercase: ";
  for(size_t i=0; i<uppercaseWords.size(); i++) {
    cout << uppercaseWords[i] << " ";
  }
  cout << endl;

  cout << "No uppercase: ";
  for(size_t i=0; i<lowercaseWords.size(); i++) {
    cout << lowercaseWords[i] << " ";
  }
  cout << endl;

   
  return 0;
}
