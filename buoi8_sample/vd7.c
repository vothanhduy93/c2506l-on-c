#include "stdio.h"

int main()
{
    // thay doi bien dieu khien chay tu 1 -> 100, moi lan tang len 1

    int i;
    // for (i = 1; i <= 100; i++)
    // {
    // }

    // thay doi bien dieu khien chay tu 100 -> 1, moi lan giam 1

    // for (i = 100; i >= 1; i--)
    // {
    //     printf("gia tri cua bien i la: %d \n", i);
    // }
    // printf("Gia tri cua bien i cuoi cung la: %d", i);

    // thay doi bien dieu khien chay tu 7 den 77, moi lan tang 7;

    // for (i = 7; i <= 77; i += 7)
    // {
    //     printf("gia tri cua bien i la: %d \n", i);
    // }

    // thay doi bien dieu khien tu 20 -> 2, moi lan giam 2

    for (i = 20; i >= 2; i = i - 2)
    {
        printf("gia tri cua bien i la: %d \n", i);
    }

    return 0;
}