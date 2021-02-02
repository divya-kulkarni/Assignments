#include <iostream> 
using namespace std; 
string units[] = { "","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ","thirteen ","fourteen ", "fifteen ", 
                 "sixteen ", "seventeen ", "eighteen ","nineteen "}; 
  
string tens[] = { "", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety " }; 
  
string convert(int n, string s) 
{ 
    string str = ""; 
    if (n > 19) 
        str += ten[n / 10] + one[n % 10]; 
    else
        str += one[n]; 
    if (n) 
        str += s; 
  
    return str; 
} 

void getWords(long n) 
{ 
    cout << convert(((n / 1000000000000000) % 100), "shankh ") << endl;
    cout << convert(((n / 10000000000000) % 100), "padma ") << endl;
    cout << convert(((n / 100000000000) % 100), "neel ") << endl;
    cout << convert(((n / 1000000000) % 100), "arab ") << endl;
    cout << convert(((n / 10000000) % 100), "crore ") << endl;
    cout << convert(((n / 100000) % 100), "lakh ") << endl; 
    cout << convert(((n / 1000) % 100), "thousand ") << endl; 
    cout << convert(((n / 100) % 10), "hundred ") << endl;
    cout << convert((n % 100), "") << endl;
} 

int main() 
{ 
    long n = 62759812342123567; 
    getWords(n);
    return 0; 
} 