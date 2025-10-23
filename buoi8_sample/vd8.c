#include "stdio.h"

int main()
{
    // Viết chương trình nhập vào số nguyên n. Tính tổng các giá trị lẻ từ 0 đến n.
    // vd: Nhap n = 5 => Tong = 1 + 3 + 5 = 9

    int i, n, tong = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            tong += i;
        }
    }

    printf("Tong la: %d", tong);

    return 0;
}