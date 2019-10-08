#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;
using std::cin; using std::cout; using std::endl; 
using std::vector; using std::sort; using std::streamsize; using std::string;
void nextpart(string str){
    string word="";
    vector<string> ar;
    int count;
    for(int i =0;i<=str.length();++i)
    {
        if(str[i]==' ')
        {
            if(count==0){
            ar.push_back(word);
            word="";
            count++;
            }
            else
            {
                ar.push_back(word.substr(0));
                word="";
            }
        }
        else if(i==str.length())
        {
            ar.push_back(word.substr(0));
        }
        else
        {
            
            word=word + str[i];
        }
    }
    sort(ar.begin(),ar.end());
    for(int u =ar.size()-1;u>=0;--u)
    {
        cout<<ar[u]<<" of size: "<<ar[u].length()<<endl;
    }
}
int main()
{
   string str;
   getline(cin,str);
   if(str[0]=' '){
   nextpart(str.substr(1));}
   else
   {
       nextpart(str);
   }
   return 0;
}