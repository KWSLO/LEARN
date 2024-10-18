#include <stdio.h>

// 逆序数函数
void func(long long n)
{
    while (n % 10 == 0)
    {
        n /= 10;   //删除末尾的0
    }
    while (n != 0)
    {
        printf("%lld", n % 10);
        n /= 10;    //换到更高位
    }
}

int main()
{
    long long n = 0;

    scanf("%lld", &n);

    if (n < 0)
    {
        printf("NULL");
    }
    else if (0 <= n && n <= 9)
    {
        printf("%lld", n);
    }
    else
    {
        func(n);
    }

    return 0;
}