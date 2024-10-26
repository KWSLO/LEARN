#include <stdio.h>
#define MAX_SIZE 10001 

int main() 
{
    int n = 0;
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("0\n");
        return 0;
    }

    int arr[MAX_SIZE];
    int max_len = 1;         // 最长连续长度
    int cur_len = 1;        // 当前连续长度

    scanf("%d", &arr[0]);

    for (int i = 1; i < n ; i++) 
    {
        scanf("%d", &arr[i]);

        // 检查是否连续
        if (arr[i] == arr[i - 1] + 1)
            cur_len++;

        else if (arr[i] != arr[i - 1] + 1)
        {
            if (max_len < cur_len)
                max_len = cur_len;
            cur_len = 1;
        }
        
        if (max_len < cur_len)
            max_len = cur_len;
    }

    printf("%d\n", max_len);
   
    return 0;
}
