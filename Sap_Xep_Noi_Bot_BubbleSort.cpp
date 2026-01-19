clscls//Sap Xep Noi Bot: Bubble Sort
//O(N^2)

#include <stdio.h>

void BubbleSort(int a[], int n){
	for (int i = 0; i < (n - 1); i++){
		//Duyet tu chi so j = 0 den j - i - 2
		for (int j = 0; j < (n - i - 1); j++){
			//So sanh hai phan tu dung canh nhau a[j] va a[j + 1]
			if (a[j] > a[j + 1]){
				int tmp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = tmp;
			}
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
	BubbleSort(a, n);
	printf("Sap xep theo chieu tang dan: ");
	for (int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
