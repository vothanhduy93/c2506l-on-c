#include "stdio.h"

int main(){
	
	int n, i;
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d", &n);
	
	int arr[n]; // khoi tao mang kieu so nguyen co n phan tu
	
	for(i = 0; i < n; i++){
		printf("Nhap gia tri cua phan tu thu %d: \n", i);
		scanf("%d", &arr[i]);
	}
	
	// in ra cac gia tri cac phan tu trong mang
	for(i = 0; i < n; i++){
		printf("Gia tri cua phan tu thu %d la: %d \n", i, arr[i]);
	}
	
	return 0;
}
