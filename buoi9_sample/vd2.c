#include "stdio.h"

int main()
{
    /*

        Vòng lặp While
        Syntax:
            while(biểu thức điều kiện){
                // Nếu biểu thức điều kiện là đúng thì làm gì đó ở đây

                vẫn sử dụng biến điều khiển i, j, k ở đây
            }
            Nếu biểu thức điều kiện là sai thì làm gì đó ở đây
    */
    // In ra các số từ 1 -> n bằng vòng lặp While

    int n, i = 1;
    printf("Nhap n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", i);
        continue;
        i++;
    }
    printf("Gia tri cua i la: %d", i);

    return 0;
}