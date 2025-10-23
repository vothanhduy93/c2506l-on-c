#include "stdio.h"

int main()
{

    //     Viết chương trình C để tính cước điện thoại bàn cho một hộ gia đình với các thông số như sau:
    // Phí thuê bao bắt buộc là 25 nghìn.
    // 600 đồng cho mỗi phút gọi của 10 phút đầu tiên.
    // 400 đồng cho mỗi phút gọi của 50 phút tiếp theo.
    // 200 đồng cho bất kỳ phút gọi nào sau 60 phút đầu tiên.

    const int THUEBAO = 25000;
    int soPhut, tongTien;

    printf("Nhap vao so phut goi: ");
    scanf("%d", &soPhut);

    if (soPhut <= 10)
    {
        tongTien = THUEBAO + soPhut * 600;
    }
    else if (soPhut > 10 && soPhut <= 60)
    {
        tongTien = THUEBAO + 10 * 600 + (soPhut - 10) * 400;
    }
    else
    {
        tongTien = THUEBAO + 10 * 600 + 50 * 400 + (soPhut - 60) * 200;
    }

    printf("Tong tien phai tra la: %d", tongTien);

    return 0;
}