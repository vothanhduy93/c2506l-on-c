#include "stdio.h"

int main(){
	
	// Cho phep nguoi dung nhap vao so luong phan tu cua mang so nguyen
	// Nhap vao gia tri cua tung phan tu
	// In ra gia tri cua cac phan tu do
	
	int arr[3], n;
	
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	
	int i;
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
