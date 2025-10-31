#include "stdio.h"
#include "string.h"

struct SinhVien {
		char hoTen[50];
		char email[50];
		char lop[30];
		double gpa;
	};
	
typedef struct SinhVien SinhVien;
	
int main(){
	
	// khai bao bien s co kieu du lieu la struct SinhVien
	SinhVien s;
	printf("Nhap ho ten: \n");
	fgets(s.hoTen, sizeof(s.hoTen), stdin);
	printf("Nhap email: \n");
	fgets(s.email, sizeof(s.email), stdin);
	printf("Nhap lop: \n");
	fgets(s.lop, sizeof(s.lop), stdin);
	printf("Nhap diem GPA: \n");
	scanf("%lf", &s.gpa);
	
	printf("Thong tin sinh vien : \n");
    printf("Ho ten: %s\n", s.hoTen);
    printf("Email: %s\n", s.email);
    printf("Lop: %s\n", s.lop);
    printf("Diem gpa: %.2lf\n", s.gpa);

		
	return 0;
}

