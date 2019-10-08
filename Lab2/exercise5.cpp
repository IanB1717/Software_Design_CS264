#include<algorithm>
#include<iomanip>
#include<iostream>
#include<ios>
#include<string>
#include<vector>
int main()
{
    
    std::cout << "Please input your words: "
              << std::endl;
    std::vector<std::string> word_input;
    std::string word;
    int count = 0;
    while (std::cin >> word)
        {
            word_input.push_back(word);
            ++count;
        }

    
    for (int i = 0; i != count; ++i)
        {
            int time = 0;
            for (int j = 0; j != count; ++j)
                {
                    if (word_input[i] == word_input[j])
                        ++time;
                    
                }

            std::cout << "The time of "
                 << word_input[i]
                 << " is: "
                 << time
                 << std::endl;
        }

    return 0;   
}