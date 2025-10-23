#include "stdio.h"

int main()
{
    // Tinh tong cac so chan su dung tu khoa continue

    int i, n, tong = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        // Neu la so chan thi lam gi do o day
        tong += i;
    }

    printf("Tong la: %d", tong);

    return 0;
}