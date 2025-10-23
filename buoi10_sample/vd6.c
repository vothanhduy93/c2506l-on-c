#include "stdio.h"


int main(){
	
	// khai bao 1 mang 2 chieu so nguyen co 2 hang va 3 cot
	
	int arr[2][3] = {{1, 2, 3},{4, 5, 6}};
	
	int i, j;
	
	// vong for so 1 la duyet hang
	for(i = 0; i < 2; i++){
		//vong for so 2 la duyet cot
		for(j = 0; j < 3; j++){
			printf("Phan tu vi tri thu [%d][%d] co gia tri la: %d\n", i, j, arr[i][j]);
		}
	}
	
	return 0;
}

