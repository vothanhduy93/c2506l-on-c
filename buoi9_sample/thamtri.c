#include "stdio.h"

/*
    Truyền tham trị: trình biên dịch sẽ tạo ra 1 bản sao và truyền bản sao đó vào vị trí muốn truyền.
    Cho nên mọi thay đổi tác động lên bản sao này sẽ không ảnh hưởng đến bản chính
*/

int thamTri(int a, int b)
{
    a++; // a là 101
    b++; // b là 201
    return a + b;
}

int main()
{
    int a = 100, b = 200;
    // Ví dụ về tham trị
    int tong = thamTri(a, b);

    printf("Gia tri cua bien a: %d\n", a);
    printf("Gia tri cua bien b: %d", b);
    return 0;
}