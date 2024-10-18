#include <stdio.h>
#include <math.h>

//Tower of Hanoi  --method1(Mathematical Induction)
//int main()
//{
//    long long n = 0;
//
//    scanf("%lld", &n);
//
//    long long result = pow(2, n) - 1;
//
//    printf("%lld", result);
//
//    return 0;
//}

//Tower of Hanoi  --method2(Iterative Method)
//long long Hanoi(long long n)
//{
//	if(n <= 1)
//		return 1;
//	long long hanoi = 2 * Hanoi(n - 1) + 1;
//
//	return hanoi;
//}
//
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//
//	long long result = Hanoi(n);
//	printf("%lld", result);
//
//	return 0;
//}


//Tower of Hanoi  --method3(Binary Method)
// Actually,this method's is equal to the method1,but the importance is that the
// thought behind the method is different.
//To be frank, this method's inspired by 3blue1Brown.
//Thank him.
int main()
{
	long long n = 0;
	scanf("%lld", &n);

	long long result = pow(2, n) - 1;
/*
You can think about this question like this.

Firstly, we can use 0 and 1 (binary) to represent the state of each plate.

If a plate moves, we can use 1 to represent this behavior.

You can imagine that the number of plates determines ->
how many binary digits we need to use.

For example, 3 plates need to be represented by 000 three digits, 
and 4 plates need to be represented by 0000 four digits.

The 0th digit is used to represent the smallest plate, 
and the 1st digit is used to represent the second smallest and so on

So, if I add 1 to 000, it represents the movement of plate 0, 
and then add 1 to change the first digit from 0 to 1, 
it represents the movement of plate 1

Obviously, if I want to move the largest plate to the third column, 
the number of operations will reach 2 ^ (n-1) times.

(Because the highest position represents the largest plate, 
and at this point, other plates will not necessarily be on the last column. 
Therefore, I only need to move the largest plate to the last column once.)

Similarly (the largest plate has already been placed), 
I have 2 ^ (n-2) operations to move the second largest plate Similarly, 
if you want to place all the plates on the last column, 
it is an arithmetic sequence that sums them up

So, the answer is that the number of operations should be at least 2 ^ n+1 times
*/

	printf("%lld", result);

	return 0;
}
