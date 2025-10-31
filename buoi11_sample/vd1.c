#include "stdio.h"

int main(){
	
	int x = 5;
	
	// khai bao 1 bien con tro ten la ptr
	int *ptr = &x;
	
	printf("Dia chi cua x la: %p\n", &x);
	printf("Gia tri cua x la: %d\n", x);
	/*
	
		Tham chieu (reference): dia chi ma con tro dang tro toi
	*/
	printf("Dia chi cua x ma con tro ptr tro toi la: %p\n", ptr);
	
	/*
		Giai tham chieu (dereference)
	*/ 
	printf("Gia tri cua x thong qua con tro ptr la: %d\n", *ptr);
	
	printf("===========================\n");
	
	// Thay doi gia tri cua bien x ma con tro ptr dang tro toi ma khong phai tac dong vao bien x
	
	*ptr = 10;
		
	return 0;
}
