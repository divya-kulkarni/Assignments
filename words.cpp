/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void printFrequency(string str, string search_word)
{
    map<string, int> Words;
 
    string word = "";
 
    for (int i = 0; i < str.size(); i++) {
 
        if (str[i] == ' ') {
 
            if (Words.find(word) == Words.end()) {
                Words.insert(make_pair(word, 1));
                word = "";
            }
 
            else {
                Words[word]++;
                word = "";
            }
        }
 
        else
            word += str[i];
    }
 
    if (Words.find(word) == Words.end())
        Words.insert(make_pair(word, 1));
 
    else
        Words[word]++;
 
    cout<<"Frequency of "<< word <<" is "<< Words[search_word] << endl;
    
}
 
int main()
{
    string str = "Geeks For Geeks";
    string wordToPrint;

    cout << "Enter word: " <<endl;
    cin>>wordToPrint;

    std::ifstream ifs("myfile.txt");
    std::string content( (std::istreambuf_iterator<char>(ifs) ),
                       (std::istreambuf_iterator<char>()    ) );
    printFrequency(content,wordToPrint);
    return 0;
}
