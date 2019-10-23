#include <cctype>  // isupper
#include <string>  // string
 
using std::isupper;
using std::string;
 
bool hasUpcaseLetters(const string& aWord)
{
    for (string::const_iterator i = aWord.begin(); i != aWord.end(); ++i) {
        if (isupper(*i))
            return true;
    }
    return false;
}