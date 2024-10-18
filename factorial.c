#include <stdio.h>

//the function of factorial
long long factorial(long long n)
{
    if (n - 1 > 0)
    {
        n *= func(n - 1);
        return n;
    }
    else
        return 1;
}

int main()
{
    long long n = 0;

    scanf("%lld", &n);

    long long result = factorial(n);

    printf("%lld", result);

    return 0;
}
