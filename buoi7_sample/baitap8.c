#include "stdio.h"

// Nhập vào một tháng, kiểm tra xem tháng đó có bao nhiêu ngày

int main()
{

    int thang, nam;

    printf("Nhap thang va nam: ");
    scanf("%d%d", &thang, &nam);

    if (thang < 1 || thang > 12)
    {
        printf("Thang khong hop le!");
    }
    else
    {
        // Thang 1, 3, 5, 7, 8, 10, 12: co 31 ngay
        // Thang 4, 6, 9, 11: co 30 ngay
        // Thang 2: neu la nam nhuan thi co 29 ngay, nam binh thuong co 28 ngay
        // Nam nhuan la nam chia het cho 4 dong thoi (AND) khong chia het cho 100 HOAC chia het cho 400

        if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
        {
            printf("Thang %d co 31 ngay", thang);
        }
        else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
        {
            printf("Thang %d co 30 ngay", thang);
        }
        else
        {
            if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
            {
                printf("Thang %d co 29 ngay", thang);
            }
            else
            {
                printf("Thang %d co 28 ngay", thang);
            }
        }
    }

    return 0;
}