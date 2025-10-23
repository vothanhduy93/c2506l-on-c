#include "stdio.h"

int main()
{

    /*

    Vòng lặp for

    for(biểu thức 1; biểu thức 2; biểu thức 3){
        code ở đây
    }

    Biểu thức 1: khởi tạo giá trị ban đầu cho biến điều khiển (thường đặt tên là biến i, j, k)
    Biểu thức 2: biểu thức kiểm tra điều kiện để tiếp tục cái vòng lặp
    Biểu thức 3: thay đổi giá trị của biến điều khiển (vd tăng/giảm 1). Còn gọi là bước nhảy của biến điều khiển

    Lưu ý:
    - Biểu thức 1 chỉ thực hiện 1 lần khi chạy vòng lặp for


    */

    int i;

    // for (i = 0; i < 3; i++)
    // {
    //     printf("day la vong lap for\n");
    // }

    // for (i = 1; i <= 3; i++)
    // {
    //     printf("day la vong lap for\n");
    // }
    for (i = 1; i <= 3; i++)
    {
        printf("Gia tri cua bien dieu khien i la: %d \n", i);
    }

    printf("Sau khi thoat khoi for thi i = %d", i);

    return 0;
}