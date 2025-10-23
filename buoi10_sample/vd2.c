#include "stdio.h"

int main(){
	
	int arr[5] = {1, 2, 4, 6, 8};
	
	arr[3] = 100;
	
	int i;
	for(i = 0; i < 5; i++){
		printf("Phan tu thu %d co gia tri la: %d\n", i, arr[i]);
	}
	
	return 0;
}
