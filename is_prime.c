#include <stdio.h>

int is_prime(int num) 
{
    if (num < 2) 
        return 0; 
    
    if (num == 2) 
        return 1; 
    
    if (num % 2 == 0) 
        return 0; 
    
    for (int j = 3; j * j <= num; j += 2) 
    { 
        if (num % j == 0) 
            return 0; 
    }
    return 1; 
}

int main() 
{
    int L = 0;
    scanf("%d", &L);

    if (L < 2)
    {
        printf("0\n"); 
        return 0;
    }

    int sum = 0; 
    int count = 0; 
    printf("2\n");
    sum += 2; 
    count++;

    for (int i = 3; sum + i <= L; i += 2) 
    { 
        if (is_prime(i)) 
        {
            printf("%d\n", i);
            sum += i;
            count++; 
        }
    }

    printf("%d\n", count); 
    return 0;
}
