#include "stdio.h"

int main()
{

    // Viết chương trình nhập vào 2 số x, y và 1 trong 4 toán tử +, -, *, /. Nếu là + thì in ra kết quả x + y, nếu là – thì in ra x – y, nếu là * thì in ra x * y, nếu là / thì in ra x / y (nếu y = 0 thì thông báo không chia được)
    int x, y;
    char phepToan;

    printf("Nhap x, y: ");
    scanf("%d%d", &x, &y);

    printf("Nhap phep toan (+, -, *, /): ");
    scanf(" %c", &phepToan);

    switch (phepToan)
    {
    case '+':
        printf("%d + %d = %d", x, y, x + y);
        break;
    case '-':
        printf("%d - %d = %d", x, y, x - y);
        break;
    case '*':
        printf("%d * %d = %d", x, y, x * y);
        break;
    default:
        if (y == 0)
        {
            printf("Khong chia duoc cho so 0");
        }
        else
        {
            printf("%d / %d = %.2f", x, y, (float)x / y);
        }
    }

    return 0;
}