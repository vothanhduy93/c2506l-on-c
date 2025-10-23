#include "stdio.h"

void nhapMang(int soHang, int soCot, int arr[soHang][soCot]){
	int i, j;
	for(i = 0; i < soHang; i++){
		for(j = 0; j < soCot; j++){
			printf("Nhap gia tri cho phan tu thu [%d][%d]: \n", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}

void inMang(int soHang, int soCot, int arr[soHang][soCot]){
	int i, j;
	for(i = 0; i < soHang; i++){
		for(j = 0; j < soCot; j++){
			printf("Gia tri cua phan tu thu [%d][%d] la: %d \n", i, j, arr[i][j]);
		}
	}
}

int main(){
	
	int soHang, soCot;
	printf("Nhap so hang: ");
	scanf("%d", &soHang);
	printf("Nhap so cot: ");
	scanf("%d", &soCot);
	
	int arr[soHang][soCot];
	nhapMang(arr, soHang, soCot);
	printf("======================");
	inMang(arr, soHang, soCot);
	
		
	return 0;
}

