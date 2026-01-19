#include <stdio.h>
#include <math.h>
//Sap xep dem phan phoi: Counting Sort
//Tu tuong: dem xem moi gia tri xuat hien bao nhieu lan, sau do in tu be den lon
//Dieu kien: khai bao mang dem co co la K + 1,voi K la phan tu lon nhat trong mang, cac phan tu >= 0

int cts[10000001] = {0};

void CountingSort(int a[], int n){
	int K = -1e9;
	for (int i = 0; i < n; i++){
		K = fmax(K, a[i]);
	}
	for (int i = 0; i < n; i++){
		cts[a[i]]++;
	}
	for (int i = 0; i <= K; i++){
		for (int j = 0; j < cts[i]; j++){
			printf("%d ", i);
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	CountingSort(a, n);
	return 0;
}
