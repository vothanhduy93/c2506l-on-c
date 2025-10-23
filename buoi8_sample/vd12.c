#include "stdio.h"

int main()
{
    // In ra bảng cửu chương của một số n
    int n, i;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}