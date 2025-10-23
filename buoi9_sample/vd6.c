#include "stdio.h"
#include "math.h"

// Khai báo biến, hàm, hằng, mảng... tất cả đều nằm ở phía trên của file
int tinhTong(int a, int b);

// Hàm không có trả về giá trị
void sayHello();

int main()
{

    /*

        Hàm (function)
        Syntax:
            data_type function_name(parameter1, parameter2... param n){
                // block code
            }

        function declaration: khai báo hàm
        function definition: định nghĩa hàm

        function call: lời gọi hàm

        Nếu muốn gọi hàm mà hàm này được định nghĩa phía sau cái hàm mà nó gọi thì lỗi

        function prototype: mẫu hàm

        built-in function: là những cái hàm mà C có sẵn

        Quan trọng: phân biệt được thế nào là tham số (parameters) và đối số/đối mục (arguments)

        Tham số dạng tham trị và tham số dạng tham biến
        Tham trị (pass by value) = tham số giá trị
        Tham biến (pass by reference) = tham số địa chỉ của biến


    */

    printf("Tong la: %d\n", tinhTong(5, 6));
    sayHello();
    return 0;
}

int tinhTong(int a, int b)
{
    return a + b;
}

void sayHello()
{
    // Định nghĩa hàm
    printf("Hello");
}