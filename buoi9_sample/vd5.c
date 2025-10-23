#include "stdio.h"

int main()
{

    /*
        Viết chương trình tính dân số của một thành phố sau 10 năm nữa, biết rằng dân số hiện nay là 6.000.000, tỉ lệ tăng dân số hàng năm là 1.8% .
    */
    int i = 1;
    float danSo = 6000000;

    while (i <= 10)
    {
        // danSo = danSo + (danSo * 0.018);
        danSo += danSo * 0.018;
        i++;
    }

    printf("Dan so sau 10 nam nua se la: %f", danSo);
    return 0;
}