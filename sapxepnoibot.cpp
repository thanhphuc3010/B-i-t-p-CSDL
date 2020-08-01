#include<stdio.h>

void nhap(int a[],  int &n ){
	 printf("\nNhap n = ");
	 scanf("%d", &n);
	 for(int i = 0; i< n; i++ ){
	 	printf("\nNhap a[%d] = ", i+1); scanf("%d", &a[i]);
	 }
}

void bubbleSort(int a[], int n ){
	for(int i = 0; i< n-1; i++ ){
		for(int j = n-1; j > i; j-- )
			if( a[j] < a[j-1] ) {
				int tg = a[j];
				a[j] = a[j-1];
				a[j-1] = tg;
			}
	}
}

void xuat(int a[], int n ){
	for(int i = 0; i< n; i++ ) printf("%5d", a[i]);
	printf("\n");
}

int main(){
	int a[20];
	int n;
	nhap(a,n);
	xuat(a,n);
	bubbleSort(a,n);
	xuat(a,n);
	return 0;
}
