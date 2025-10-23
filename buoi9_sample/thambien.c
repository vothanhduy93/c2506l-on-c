#include "stdio.h"

/*
    Truyền tham biến: truyền cái địa chỉ của cái biến đó vào nơi cần truyền.
    Cho nên trong hàm mà giá trị của biến có thay đổi gì thì biến đó sẽ thay đổi vĩnh viễn sau khi kết thúc lời gọi hàm
*/

int thambien(int *a, int *b)
{
    *a = *a + 1; // a là 101
    *b = *b + 1; // b là 201
    return *a + *b;
}

int main()
{
    int a = 100, b = 200;
    // Ví dụ về tham biến
    int tong = thambien(&a, &b);

    printf("Gia tri cua bien a: %d\n", a);
    printf("Gia tri cua bien b: %d", b);
    return 0;
}