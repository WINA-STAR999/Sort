 phan tu da duoc sap xep truoc do
#include <stdio.h>

void InsertionSort(int a[], int n){
	for (int i = 1; i < n; i++){
		int pos = i - 1, value = git a[i];
			a[pos + 1] = a[pos];
			--pos; 
		}
		a[pos + 1] = value;
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	InsertionSort(a, n);
	printf("Sap xep theo chieu tang dan: ");
	for (int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
