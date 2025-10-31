#include "stdio.h"

// Function prototype: nguyen mau ham
void change(int *ptr);

int main(){
	
	int x = 10;
	
	printf("Gia tri cua x la: %d\n", x);
	printf("Dia chi cua x la: %p\n", &x);
	
	change(&x);
	
	printf("Gia tri cua x hien tai la: %d\n", x);
	printf("Dia chi cua x hien tai la: %p\n", &x);
		
	return 0;
}

void change(int *ptr){
	// Function definition: dinh nghia ham
	*ptr = 1000;
}
