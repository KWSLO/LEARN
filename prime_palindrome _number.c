#include <stdio.h>

int is_prime(long num) 
{
    if (num < 2) 
        return 0; 
    
    if (num == 2) 
        return 1; 
    
    if (num % 2 == 0) 
        return 0; 
    
    for (int j = 3; j * j <= num; j += 2) 
    { 
        if (num % j == 0) 
            return 0; 
    }
    return 1; 
}

int is_palin(long x)
{
    long original = x;
    long reversed = 0;

    while (x > 0)
    {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    return original == reversed;
}

int main() 
{
    long a = 0;
    long b = 0;
    scanf("%ld %ld", &a, &b);

    for (long j = a; j <= b; j++)
    {
        if (is_palin(j) && is_prime(j))
            printf("%ld\n", j);
    }

    return 0;
}
