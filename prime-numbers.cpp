#include <stdio.h>

int main(void)
{
    int N;
    int count = 0;
    scanf("%d", &N);
    if(N <= 1)
    {
        printf("IT IS NOT A PRIME\n");
    }
    for(int i = 1; i <= N; i++)
    {
        int temp = N % i;
        if(temp == 0)
        {
            count = count + 1;
        }
    }
    if(count == 2)
    {
        printf("IT IS A PRIME NUMBER\n");
    }
    else
    {
        printf("IT IS NOT A PRIME\n");
    }
    

    return 0;
}
