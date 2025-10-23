#include "stdio.h"
#include "math.h"

// Khai báo biến toàn cục

int main()
{
    // ax2 + bx + c = 0

    float a = 0, b = 0, c = 0, x1 = 0, x2 = 0, delta = 0;

    printf("Nhap vao a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0 && b == 0)
    {
        if (c == 0)
        {
            printf("Phuong trinh vo so nghiem");
        }
        else
        {
            printf("Phuong trinh vo nghiem");
        }
    }
    else if (a == 0 && b != 0)
    {
        printf("Nghiem cua phuong trinh la: %.2f", -c / b);
    }
    else
    {
        delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            printf("Phuong trinh vo nghiem");
        }
        else if (delta == 0)
        {
            printf("Nghiem x1 = x2 = %.2f", -b / 2 * a);
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Nghiem x1 la: %.2f\n", x1);
            printf("Nghiem x2 la: %.2f", x2);
        }
    }

    return 0;
}