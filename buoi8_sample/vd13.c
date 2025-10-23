#include "stdio.h"

int main()
{
    // kiem tra 1 so co phai la so nguyen to hay khong
    // so nguyen to > 1 va chi chia het cho 1 va cho chinh no

    int n, i, dem = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("So %d khong phai la so nguyen to", n);
        return 0;
    }

    for (i = 2; i <= n; i++)
    {
        if (n % i == 0 && n != i)
        {
            dem++;
            break; // de ket thuc luon vong lap for ma khong can phai xet dieu kien
        }
    }

    // Ternary operator: toan tu ba ngoi
    dem == 0 ? printf("%d la so nguyen to", n) : printf("%d khong phai la so nguyen to", n);

    return 0;
}