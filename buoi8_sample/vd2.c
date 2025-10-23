#include "stdio.h"

int main()
{

    int i;
    for (i = 1;; i++)
    {
        printf("Gia tri cua bien dieu khien i la: %d \n", i);

        if (i == 100)
        {
            return 0;
        }

        // Khối lệnh (code block)
    }

    return 0;
}