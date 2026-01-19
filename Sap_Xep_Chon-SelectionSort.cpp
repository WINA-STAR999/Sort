
#include <stdio.h>

void SelectionSort(int a[], int n){
	for(int i = 0; i < (n - 1); i++){
		int min_pos = i; //Ban dau coi i la phan tu nho nhat
		for(int j = i + 1; j < n; j++){
			if (a[j] < a[min_pos]){
				min_pos = j;
			}
		}
		//Doi cho a[i] va a[min_pos]
		int tmp = a[i]; a[i] = a[min_pos]; a[min_pos] = tmp;
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	SelectionSort(a, n);
	printf("Sap xep theo chieu tang dan: ");
	for (int i = 0; i < n; i++){
		printf("%d", a[i]);
	}
	return 0;
}
