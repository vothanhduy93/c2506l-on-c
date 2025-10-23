#include "stdio.h"

int main()
{
    /*
        Nếu vòng lặp for nào có từ khóa break thì nó chỉ thoát khỏi vòng lặp đó thôi
    */

    int i, j;
    for (i = 1; i < 10; i++)
    {
        printf("Gia tri cua bien i la: %d \n", i);
        for (j = 1;; j++)
        {
            if (j == 100)
            {
                break;
            }
        }
    }

    return 0;
}