#include "stdio.h"
#include "string.h"

struct TacGia{
	char ten[50];
	char quocTich[50];
};

typedef struct TacGia TacGia;

struct Sach{
	TacGia tg;
	char tenSach[50];
	int giaBan;
};

typedef struct Sach Sach;
	
int main(){
	
	Sach sach;
	strcpy(sach.tenSach, "Hanh trinh vo dich WC 2022");
	sach.giaBan = 100000;
	strcpy(sach.tg.ten, "Lionel Messi");
	strcpy(sach.tg.quocTich, "Argentina");
	
	printf("Thong tin sach : \n");
    printf("Tieu de: %s\n", sach.tenSach);
    printf("Ten tac gia: %s\n", sach.tg.ten);
    printf("Quoc tich tac gia: %s\n", sach.tg.quocTich);
    printf("Gia ban: %dVND\n", sach.giaBan);


		
	return 0;
}

