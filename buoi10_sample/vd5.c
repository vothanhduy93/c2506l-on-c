#include "stdio.h"

// Khai bao bien o day: global variables (bien toan cuc)
int a = 5;

void nhap(int arr[], int n);
void in(int arr[], int n);

int main(){
	
	int n;
	printf("Nhap so luong phan tu: \n");
	scanf("%d", &n);
	
	// khai bao 1 mang so nguyen co n phan tu
	int arr[n];
	
	nhap(arr, n);
	printf("===================\n");
	in(arr, n);
	
	return 0;
}

// dinh nghia ham nhap
void nhap(int arr[], int n){
	// bien cuc bo (local variables)
	int i;
	for(i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: \n", i);
		scanf("%d", &arr[i]);
	}
}

// dinh nghia ham in
void in(int arr[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Phan tu thu %d co gia tri la: %d \n", i, arr[i]);
	}
}
