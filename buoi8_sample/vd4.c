#include "stdio.h"

int main()
{
    /*
        Từ khóa continue
    */

    int i;
    for (i = 1; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("Gia tri cua bien i la: %d \n", i);
    }

    return 0;
}