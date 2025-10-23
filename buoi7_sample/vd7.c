#include "stdio.h"

int main()
{

    //  In ra số chẵn và số lẻ.
    int a;
    printf("Nhap so: ");
    scanf("%d", &a);

    switch (a % 2)
    {
    case 0:
        printf("So chan");
        break;
    default:
        printf("So le");
    }
    return 0;
}