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
	strcpy(s.hoTen, "Vo Thanh Duy");
	strcpy(s.email, "hcmc.duyvo@gmail.com");
	strcpy(s.lop, "Aptech");
	s.gpa = 9.1;
	printf("Ho ten: %s\n", s.hoTen);
	printf("Email: %s\n", s.email);
	printf("Lop: %s\n", s.lop);
	printf("Diem GPA: %.2lf\n", s.gpa);
		
	return 0;
}

