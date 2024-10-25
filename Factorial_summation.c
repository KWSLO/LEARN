#include <stdio.h>
#define LEN 1000 
/*
* This program uses high-precision multiplication 
to calculate the factorial summation, 
taking care that n is not too large
*/
void clear(int a[] , int n)
{
	for (int i = 0; i < LEN; i++)
	{
		a[i] = 0;
	}
}

int main() 
{
	int n = 0;
	scanf("%d", &n);
	
	int a[LEN] = { 0 };
	int b[LEN] = { 0 };
	clear(a, LEN);
	clear(b , LEN);

	a[1] = 1;
	b[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j < LEN; j++)   //Multiply from the highest place
		{
			a[j] *= i;
		}

		for (int j = 1; j < LEN; j++)
		{
			if (a[j] >= 10)
			{
				a[j + 1] += a[j] / 10;
				a[j] %= 10;
			}
		}

		for (int j = 1; j < LEN; j++)   //Start at the lowest point
		{
			b[j] += a[j];
		}

		for (int j = 1; j < LEN; j++)
		{
			if (b[j] >= 10)
			{
				b[j + 1] += b[j] / 10;
				b[j] %= 10;
			}
		}
	}
	
	int flag = 0;
	for (int j = LEN - 1; j >= 1; j--)
	{
		if (b[j] != 0 || flag)
		{
			printf("%d", b[j]);
			flag = 1;
		}
	}

	return 0;
}

