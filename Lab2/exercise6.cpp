#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include<cstring>
#include<ios>
#include<iomanip>

using std::cin; using std::cout; using std::endl; 
using std::vector; using std::sort; using std::streamsize; using std::string;
void minMaxLengthWords(string input, string &minWord, string &maxWord)
{
    char c = input[0];
    if(c=' ')
    {
        input=input.substr(1);
    }
    int len = input.length();
    int si=0;
    int ei=0;
    int min_length = len;
    int max_start_index=0;
    int min_start_index = 0;
    int max_length=0;
    
    while(ei <= len)
    {
        if(ei < len && input[ei]!=' ')
           ei++;
        
        
        else
        {
            int curr_length=ei-si;
            
            if(curr_length<min_length)
            {
                min_length=curr_length;
                min_start_index=si;
            }
            if(curr_length>max_length)
            {
                max_length=curr_length;
                max_start_index=si;
            }
            ei++;
            si=ei;
        }
    }
    minWord=input.substr(min_start_index, min_length);
    maxWord=input.substr(max_start_index, max_length);
}
int main()
{
 string a;
 getline(cin, a);
 string minWord, maxWord;
 minMaxLengthWords(a, minWord, maxWord);
 cout<<"smallest word: "<<minWord<<" of size "<<minWord.length()<<endl;
 cout<<"largest word: "<<maxWord<<" of size "<<maxWord.length()<<endl;
}