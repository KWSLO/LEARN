#include <stdio.h>

// ����������
void func(long long n)
{
    while (n % 10 == 0)
    {
        n /= 10;   //ɾ��ĩβ��0
    }
    while (n != 0)
    {
        printf("%lld", n % 10);
        n /= 10;    //��������λ
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