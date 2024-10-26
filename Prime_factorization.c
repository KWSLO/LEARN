#include <stdio.h>

int is_prime(long  long p)
{
	if (p < 2)
		return 0;
	
	if (p == 2 || p == 3)
	{
		return 1;
	}
	
	if (p % 6 != 1 && p % 6 != 5)
	{
		return 0;
	}
	
	for (int i = 5; i*i <= p; i += 6)
	{
		if (p % i == 0 || p % (i + 2) == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main() 
{
	long long n = 0;
    scanf("%lld", &n);
	
	long long max = 0;
	long long min = 0;
	long long i = 0;

	if (n % 2 == 0)
	{
		max = n / 2;
		if (is_prime(max))
		{
			printf("%lld", max);
			return 0;
		}
	}
	
	if (n % 3 == 0)
	{
		max = n / 3;
		if (is_prime(max))
		{
			printf("%lld", max);
			return 0;
		}
	}

	for (long long j = 5; j * j <= n; j += 6)
	{
		if (n % j == 0)
		{
			max = n / j;
			if (is_prime(max) && n % max == 0)
			{
				printf("%lld", max);
				return 0;
			}
		}

		if(n % (j + 2) == 0)
		{
			max = n / (j + 2);
			if (is_prime(max) && n % max == 0)
			{
				printf("%lld", max);
				return 0;
			}
		}
	}

    return 0;
}
