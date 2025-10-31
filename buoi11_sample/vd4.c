#include "stdio.h"

// Function prototype: nguyen mau ham
void swap(int *x, int *y);

int main(){
	
	int x = 10, y = 50;
	
	swap(&x, &y);
	
	printf("Gia tri cua x la: %d\n", x);
	printf("Gia tri cua y la: %d\n", y);
		
	return 0;
}

void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
