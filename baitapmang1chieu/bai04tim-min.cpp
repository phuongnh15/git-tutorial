//tim va in ra chi so cua so NN(LN) trong mang
#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	printf("Nhap gia tri cac phan tu cua mang: ");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int min=a[0],idx;
	for(int i=0;i<n;i++){
		if(a[i]<=min){
			min=a[i];
			idx=i;//vi tri min=i
		}
	}
	printf("min = %d, o phan tu thu: %d",min,idx);
	return 0;
		
}	