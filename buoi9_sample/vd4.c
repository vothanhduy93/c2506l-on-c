#include "stdio.h"

int main()
{

    // Dem so chu so trong n
    /*
        vd: n = 12345;
        Lấy n chia nguyên cho 10 xong tăng biến đếm lên 1
        => n / 10 = 12345 / 10 = 1234.5 => gán lại giá trị này cho biến n
        => dem++ => dem là 1
        tiếp tục lặp lại lấy n chia 10 tiếp xong rồi tăng biến đếm lên 1
        => n / 10 = 1234 / 10 = 123.4 => gán lại cho n
        => dem++ => dem là 2

    */
    int n, dem = 0, i = 1;
    printf("Nhap n: ");
    scanf("%d", &n);

    while (n != 0)
    {
        n = n / 10;
        // n /= 10;
        dem++;
    }
    printf("So chu so la %d", dem);
    return 0;
}