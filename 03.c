#include <stdio.h>

#include <math.h>



//计算长度函数

double length(double x1, double y1, double x2, double y2)

{

    double len = 0.0;

    len = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

    return len;

}



int main()

{

    int n = 0;

    double arr[21];

    int left = 0;

    int right = 1;

    double sum = 0.0;

    double re = 0.0;



    scanf("%d", &n);



    for (int i = 0; i < n; i++)

    {

        scanf("%lf %lf", &arr[left], &arr[right]);

        left += 2;

        right += 2;

    }



    for (int i = 1, left = 0, right = 1; i <= n; i++)

    {

        re = length(arr[left], arr[right], arr[left + 2], arr[right + 2]);

        sum += re;

        left += 2;

        right += 2;



        if (n == 1)

        {

            printf("0.00");

            return 0;

        }

        if (n == 2)

        {

            break;

        }

    }



    printf("%.2lf", sum);



    return 0;

}