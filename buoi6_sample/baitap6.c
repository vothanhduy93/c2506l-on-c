#include "stdio.h"

int main()
{
    // Viết một chương trình C để nhập lương nhân viên, tính thuế thu nhập và thực lĩnh (số tiền lương thực sự mà nhân viên đó nhận được). Với các thông số giả sử như sau (không theo luật lương, chỉ là con số giả sử để dễ tính toán):
    // 30% thuế thu nhập nếu lương là 15 triệu.
    // 20% thuế thu nhập nếu lương từ 7 đến 15 triệu.
    // 10% thuế thu nhập nếu lương dưới 7 triệu.

    int luong, thueThuNhap, thucLinh;

    printf("Nhap vao luong cua ban: ");
    scanf("%d", &luong);

    if (luong > 0)
    {
        if (luong >= 15000000)
        {
            thueThuNhap = luong * 0.3;
        }
        else if (luong >= 7000000)
        {
            thueThuNhap = luong * 0.2;
        }
        else
        {
            thueThuNhap = luong * 0.1;
        }

        thucLinh = luong - thueThuNhap;
        printf("Nhan vien co thue thu nhap la: %d va thuc linh la: %d", thueThuNhap, thucLinh);
    }
    else
    {
        printf("Luong phai lon hon 0!");
    }

    return 0;
}