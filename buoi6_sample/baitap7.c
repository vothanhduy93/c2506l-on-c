#include "stdio.h"

int main()
{

    // Cửa hàng của bạn nhận gửi bán sản phẩm cho một công ty khác và hưởng hoa hồng, với mức hoa hồng theo doanh số bán như sau:
    // 5% nếu tổng doanh số nhỏ hơn hoặc bằng 100 triệu.
    // 10% nếu tổng doanh số nhỏ hơn hoặc bằng 300 triệu.
    // 20 % nếu tổng doanh số là lớn hơn 300 triệu.
    // Hãy viết chương trình C để tính hoa hồng bạn sẽ nhận được dựa trên doanh số bán hàng.

    int doanhSo, hoaHong;

    printf("Nhap doanh so ban hang: ");
    scanf("%d", &doanhSo);

    if (doanhSo >= 0)
    {
        if (doanhSo <= 100000000)
        {
            hoaHong = doanhSo * 0.05;
        }
        else if (doanhSo > 100000000 && doanhSo <= 300000000)
        {
            hoaHong = doanhSo * 0.1;
        }
        else
        {
            hoaHong = doanhSo * 0.2;
        }

        printf("Hoa hong duoc nhan cua ban la: %d", hoaHong);
    }
    else
    {
        printf("Doanh so ban nhap khong hop le!");
    }

    return 0;
}