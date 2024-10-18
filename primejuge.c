#include <stdio.h>

//prime≈–∂œ
int prime_judg(int n)
{
    if (n == 2) { return 1; }
    else if (n % 2 == 0) { return 0; }
    else
    {
        for (int i = 3; i * i < n; i += 2)
        {
            if ((n % i) == 0) { return 0; }
            else { return 1; }
        }
    }

    return 1;
}
int main()
{
    int n = 0;

    scanf("%d", &n);

    if (prime_judg(n)) { printf("Y"); }
    else { printf("N"); }

    return 0;
}

