#include <stdio.h>

int main()
{
	long a = 0;
	long b = 0;
	long c = 0;
	long tmp = 0;
	long mod = 0;

	scanf("%ld %ld %ld" , &a, &b, &c);  //Enter the Pythagorean number

	//Sequential arrangement
	if (a > b) { tmp = a; a = b; b = tmp; }
	if (a > c) { tmp = a; a = c; c = tmp; }
	if (b > c) { tmp = b; b = c; c = tmp; }

	int tmp1 = a;
	int tmp2 = c;

	do         
	{
		mod = c % a;    //The Euclid algorithm
		c = a;
		a = mod;
	} 
	while (mod);
	
	printf("%d/%d", tmp1/c, tmp2 /c);

	return 0;
}