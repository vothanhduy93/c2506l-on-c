#include "stdio.h"
#include "conio.h"

int main()
{
    // In ra bảng cửu chương của một số n
    int n, i, j;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d x %d = %d\t", j, i, i * j);
        }
        printf("\n");
    }
    getch();
    return 0;
}