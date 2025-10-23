#include "stdio.h"

int main()
{
    // Viết chương trình kiểm tra một số có chia hết cho 3 và 2 hay không?

    int a = 0;
    printf("Nhap a: ");
    scanf("%d", &a);

    if (a % 2 == 0) // Kiem tra a co chia het cho 2 hay khong?
    {
        if (a % 3 == 0)
        {
            printf("So nay chia het cho 2 va chia het cho 3");
        }
        else
        {
            printf("So nay chia het cho 2 nhung khong chia het cho 3");
        }
    }
    else
    {
        if (a % 3 == 0)
        {
            printf("So nay chia het cho 3 nhung khong chia het cho 2");
        }
        else
        {
            printf("So nay khong chia het cho 2 va khong chia het cho 3");
        }
    }

    return 0;
}