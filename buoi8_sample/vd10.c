#include "stdio.h"

int main()
{
    // Viết chương trình cho nhập liên tiếp các ký tự từ bàn phím, chỉ thoát khi bấm phím số 0;

    char kiTu;
    int i;
    printf("Nhap vao ky tu bat ky: ");

    for (i = 1;; i++)
    {
        scanf("%c", &kiTu);
        if (kiTu == '0')
        {
            break;
        }
    }

    return 0;
}