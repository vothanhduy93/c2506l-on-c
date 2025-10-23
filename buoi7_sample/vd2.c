#include "stdio.h"

int main()
{
    // Viết chương trình nhập vào thứ là số và in ra thứ là chữ
    int n;

    printf("Nhap vao so n: ");
    scanf("%d", &n);

    switch (n)
    {
    case 2:
        printf("Thu 2");
        break;
    case 3:
        printf("Thu 3");
        break;
    case 4:
        printf("Thu 4");
        break;
    case 5:
        printf("Thu 5");
        break;
    case 6:
        printf("Thu 6");
        break;
    case 7:
        printf("Thu 7");
        break;
    }

    return 0;
}