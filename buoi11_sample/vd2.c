#include "stdio.h"

int main(){
	
	int x = 5;
	
	int *ptr1 = &x;
	int *ptr2 = &x;
	int *ptr3 = ptr2;
	
	printf("Dia chi ma ptr1 dang tro toi la: %p\n", ptr1);
	printf("Dia chi ma ptr2 dang tro toi la: %p\n", ptr2);
	printf("Dia chi ma ptr3 dang tro toi la: %p\n", ptr3);
		
	return 0;
}
