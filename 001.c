#include <stdio.h>
#include <math.h>

//ÅÐ¶Ï×ÔÊØÊý
void func(long long n)
{
    long long num = n * n;
    long x = n;
    int count = 0;

    while (n)
    {
        n /= 10;
        count++;
    }

    long long mod = (long long)pow(10, count);

    if ((num % mod) == x)
        printf("%lld ", x);

}

int main()
{
    long long n = 0;

    scanf("%lld", &n);

    for (long long i = 1; i <= n; i++)
    {
        func(i);
    }

    return 0;
}