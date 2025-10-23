#include "stdio.h"

void draw(char kiTu);

int main()
{
    int i, j, soCot, soDong;
    char kiTu;
    printf("Ban muon in ra hinh chu nhat co ky tu gi?");
    scanf("%c", &kiTu);
    printf("Nhap so cot va so dong: ");
    scanf("%d%d", &soCot, &soDong);
    // So dòng là 5, số cột là 10
    for (i = 1; i <= soCot; i++)
    {
        for (j = 1; j <= soDong; j++)
        {
            draw(kiTu);
        }
        printf("\n");
    }

    return 0;
}

void draw(char kiTu)
{
    printf("%c", kiTu);
}