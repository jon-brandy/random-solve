#include <stdio.h>

int main(void)
{   
    int a, b;
    scanf("%d %d", &a, &b);
    int hitung =  1;
    for(int i = 1; i <= b; i++)
    {
        hitung = hitung  * a;
    }
    printf("%d", hitung);   

    return 0;
}
