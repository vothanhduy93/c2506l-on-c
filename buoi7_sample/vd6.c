#include "stdio.h"

int main()
{

    // Bài tập 1. Viết chương trình xác định biến ký tự color rồi in ra thông báo - RED, nếu color = 'R' hoặc color = 'r' - GREEN, nếu color = 'G' hoặc color = 'g' - BLUE, nếu color = 'B' hoặc color = 'b' - BLACK, nếu color có giá trị khác.
    char color;
    printf("Nhap vao ma mau: ");
    scanf("%c", &color);

    switch (color)
    {
    case 'R':
    case 'r':
        printf("RED");
        break;
    case 'G':
    case 'g':
        printf("GREEN");
        break;
    case 'B':
    case 'b':
        printf("BLUE");
        break;
    default:
        printf("BLACK");
    }
    return 0;
}