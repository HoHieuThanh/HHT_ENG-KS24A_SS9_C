#include<stdio.h>
int main(){
	
	int arr[100];
	int i, j, index, input;
	
	printf("nhap vao so phan tu muon nhap: ");
	scanf("%d",&j);
	printf("nhap vao %d phan tu:\n",j);
	for(i=0; i<j; i++){
		scanf("%d", &arr[i]);
	}
	printf("nhap vi tri muon xoa: ");
	scanf("%d", &index);
	for(i=index; i<j; i++){
		arr[i-1]=arr[i];
	}
	for(i=0; i<j-1; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	return 0;
}