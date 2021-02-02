#include <stdio.h>

int main()
{
    long long num, n;
    int i, digit;
    int freq[10];

    printf("Enter number to count digits: ");
    scanf("%lld", &num);

    for(i=0; i<10; i++)
    {
        freq[i] = 0;
    }
    n = num; 
  
    while(n != 0)
    {
        digit = n % 10;
        n /= 10;
        freq[digit]++;
    }

    printf("Frequency of each digit in %lld is: \n", num);
    for(i=0; i<10; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }

    return 0;
}