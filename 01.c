#include <stdio.h>

long long fact(int n) 
{
    long long result = 1;
    for (int i = 1; i <= n; i++) 
    {
        result *= i;
    }
   
    return result;
}

int main()
{
    int n = 0;
    int m = 0;

    scanf("%d %d", &m, &n);

    if (m <= 0 || n <= 0) { printf("-1"); }
    else if (m < n) { printf("0"); }
    else if (m == n) { printf("1"); }
    else if (m > n) 
    {
        long long result = fact(m) / (fact(n) * fact(m - n));

        printf("%d", result);
    }

    return 0;
}

