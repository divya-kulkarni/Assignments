#include <iostream> 
using namespace std; 
long long int countOccurrences(long long int n, 
                               int d) 
{ 
    long long int count = 0; 
    while (n > 0) { 
        count = (n % 10 == d) 
                    ? count + 1 
                    : count; 
        n = n / 10; 
    } 
    return count; 
} 
  
int main() 
{ 
    int d = 2; 
    long long int n = 98646823; 
  
    cout << countOccurrences(n, d) 
         << endl; 
  
    return 0; 
} 