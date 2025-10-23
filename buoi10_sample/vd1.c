#include "stdio.h"

int main(){
	
	// khai bao mang so nguyen co 100 phan tu
	//int a[100], i; // khai bao ma khong khoi tao gia tri cho cac phan tu cua mang
	
//	printf("phan tu thu 0 co gia tri la: %d\n", a[0]);
	
	// duyet cac phan tu co trong mang
//	for(i = 0; i < 100; i++){
//		printf("phan tu thu %d co gia tri la: %d\n", i, a[i]);
//	}
	
	int i;
	int a[100] = {0};
	
	// Duyet mang bang vong lap for
	for(i = 0; i < 100; i++){
		printf("phan tu thu %d co gia tri la: %d\n", i, a[i]);
	}
	
	printf("-----------------------\n");
	// Duyet mang dao nguoc
	for( i = 100; i > 0; i--){
		printf("phan tu thu %d co gia tri la: %d\n", i, a[i]);
	}
	
	return 0;
}
