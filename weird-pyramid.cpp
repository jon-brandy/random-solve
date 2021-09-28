#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int arr[N];
    int count = 0;
	for (int i = 0; i < N; i++)
    {
        arr[i] = (i + 1) * (i + 2) / 2;
        count = count + 1;
		for(int j = 0; j < count; j++)
        {
            printf("%d ", arr[j]);
    	}
        printf("\n");
    }
    
    return 0;
}
