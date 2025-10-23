#include "stdio.h"

int main()
{
    // Tính 1 + 2 + 3 + 4 + ... + n với n nhập từ bàn phím

    int n, tong = 0, i;
    printf("Nhap so n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        // tong = tong + i;
        tong += i;
    }
    printf("Tong la: %d", tong);
    return 0;
}