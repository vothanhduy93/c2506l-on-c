#include "stdio.h"

int main()
{
    // Tính n giai thừa (n!) với n nhập từ bàn phím
    // n = 4 => n! = 1*2*3*4
    int n, giaiThua = 1, i;
    printf("Nhap so n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        // giaiThua = giaiThua * i;
        giaiThua *= i;
    }

    printf("%d! = %d", n, giaiThua);
    return 0;
}