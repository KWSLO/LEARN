#include <stdio.h>
#include <math.h>
#define a ((1.0 + pow(5, 0.5)) / 2.0)
#define b ((1.0 - pow(5, 0.5)) / 2.0)

int main()
{
	int n = 0.0;
	scanf("%d", &n);

	double Fn = 0.0;
	double an = 1.0;
	double bn = 1.0;

	for (double i = 1.0; i <= n; i += 1.0)
	{
		an *= a;
		bn *= b;
		Fn = an - bn;
	}

	Fn /= pow(5, 0.5);

	printf("%.2lf", Fn);

	return 0;
}