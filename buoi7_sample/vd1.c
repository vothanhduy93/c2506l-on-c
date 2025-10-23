#include "stdio.h"

int main()
{

    int a;
    printf("Nhap vao so 1, 2, 3: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("* \n");
        break;
    case 2:
        printf("** \n");
        break;
    default:
        printf("*** \n");
    }

    return 0;
}