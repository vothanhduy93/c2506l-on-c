#include "stdio.h"

int main()
{
    // ------------------------------
    // Doc truyen: THIEN LONG BAT BO
    // ------------------------------
    // Vui long nhap so 1-4:
    // 1. Hoi 1
    // 2. Hoi 2
    // 3. Hoi 3
    // 4. Hoi 4
    // -------------------------------
    // Hoi 1: Noi dung hoi 1
    // -------------------------------
    // Vui long nhap 1-4:
    // -------------------------------
    // 1. Chuong 1
    // 2. Chuong 2
    // 3. Chuong 3
    // 4. Chuong 4

    int menu, subMenu;

    printf("------------------------------\n");
    printf("Doc truyen: THIEN LONG BAT BO\n");
    printf("------------------------------\n");
    printf("Vui long nhap so 1-4:\n");
    printf("1. Hoi 1\n");
    printf("2. Hoi 2\n");
    printf("3. Hoi 3\n");
    printf("4. Hoi 4\n");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        printf("------------------------------\n");
        printf("Hoi 1: Noi dung hoi 1\n");
        printf("-------------------------------\n");
        printf("Vui long nhap 1-4:\n");
        printf("1. Chuong 1\n");
        printf("2. Chuong 2\n");
        printf("3. Chuong 3\n");
        printf("4. Chuong 4\n");
        scanf("%d", &subMenu);
        switch (subMenu)
        {
        case 1:
        case 2:
        case 3:
        case 4:
            printf("Ban da chon Hoi %d - Chuong %d", menu, subMenu);
            break;
        default:
            printf("So ban nhap khong hop le!");
        }
        break;

    case 2:
        printf("------------------------------\n");
        printf("Hoi 2: Noi dung hoi 2\n\n");
        printf("-------------------------------\n\n");
        printf("Vui long nhap 1-4:\n\n");
        printf("1. Chuong 1\n\n");
        printf("2. Chuong 2\n\n");
        printf("3. Chuong 3\n\n");
        printf("4. Chuong 4\n\n");
        scanf("%d", &subMenu);
        switch (subMenu)
        {
        case 1:
        case 2:
        case 3:
        case 4:
            printf("Ban da chon Hoi %d - Chuong %d", menu, subMenu);
            break;
        default:
            printf("So ban nhap khong hop le!");
        }
        break;
    case 3:
        printf("------------------------------\n");
        printf("Hoi 3: Noi dung hoi 3\n");
        printf("-------------------------------\n");
        printf("Vui long nhap 1-4:\n");
        printf("1. Chuong 1\n");
        printf("2. Chuong 2\n");
        printf("3. Chuong 3\n");
        printf("4. Chuong 4\n");
        scanf("%d", &subMenu);
        switch (subMenu)
        {
        case 1:
        case 2:
        case 3:
        case 4:
            printf("Ban da chon Hoi %d - Chuong %d", menu, subMenu);
            break;
        default:
            printf("So ban nhap khong hop le!");
        }
        break;

    case 4:
        printf("-----------------------\n-------\n");
        printf("Hoi 4: Noi dung hoi 4\n");
        printf("-------------------------------\n");
        printf("Vui long nhap 1-4:\n");
        printf("1. Chuong 1\n");
        printf("2. Chuong 2\n");
        printf("3. Chuong 3\n");
        printf("4. Chuong 4\n");
        scanf("%d", &subMenu);
        switch (subMenu)
        {
        case 1:
        case 2:
        case 3:
        case 4:
            printf("Ban da chon Hoi %d - Chuong %d", menu, subMenu);
            break;
        default:
            printf("So ban nhap khong hop le!");
        }
    }

    return 0;
}