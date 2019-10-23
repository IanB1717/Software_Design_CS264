#include <iostream>  
#include <string>
#include <vector>
#include "hasUpcaseLetters.h"  
#include "vcout.h"  
 
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
 
int main()
{
    string word;
    vector<string> allLowcaseLetterWords;
    vector<string> someUpcaseLetterWords;
 
    // Populate vectors
    while (cin >> word) {
        if (hasUpcaseLetters(word))
            someUpcaseLetterWords.push_back(word);
        else
            allLowcaseLetterWords.push_back(word);
    }
 
    // Print words with at least 1 upper case letter
    cout << "\nThese words contain at least one upper case letter: " << endl;
    vcout(someUpcaseLetterWords);
 
    // Print pure lower case words
    cout << "\nThese words are pure lower case letters: " << endl;
    vcout(allLowcaseLetterWords);
 
    return 0;
}