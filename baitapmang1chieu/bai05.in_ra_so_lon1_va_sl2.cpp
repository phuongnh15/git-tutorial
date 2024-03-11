//in ra so lon nhat vs lon thu 2
#include<stdio.h>
int main(){
	int n;
	printf("nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	printf("nhap gia tri cac phan tu cua mang: ");
	for(int i=0;i<n;i++){
		scanf("%d",a[i]);
	}
	int max1=-1000000000,max2=-1000000000;
	for(int i=0;i<n;i++){
		if(a[i]>max1){
			max2=max1;
			max1=a[i];
		}else if(a[i]>max2){
			max2=a[i];
		}
	}
	printf("gia tri lon nhat = %d, gtri lon thu 2 = %d",max1,max2);
	return 0;
}