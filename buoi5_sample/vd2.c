#include "stdio.h"

int main()
{

    // Sắp xếp code trong VS Code: Ctrl + Shift + F

    float diem = 0;
    printf("Nhap diem: ");
    scanf("%f", &diem);
    if (diem > 0 && diem <= 10)
    {
        if (diem >= 9)
        {
            printf("Xuat sac");
        }
        else if (diem >= 8)
        {
            printf("Gioi");
        }
        else if (diem >= 7)
        {
            printf("Kha");
        }
        else if (diem >= 6)
        {
            printf("Trung binh kha");
        }
        else if (diem >= 5)
        {
            printf("Trung binh");
        }
        else
        {
            printf("Yeu");
        }
    }
    else
    {
        printf("Diem khong hop le!");
    }
    return 0;
}