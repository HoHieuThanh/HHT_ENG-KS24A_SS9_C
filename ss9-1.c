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
	printf("nhap vi tri muon chen: ");
	scanf("%d", &index);
	printf("nhap vao phan tu chen: ");
	scanf("%d", &input);
	for(i=j; i>index; i--){
		arr[i]=arr[i-1];
	}
	arr[index]=input;
	for(i=0; i<=j; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	return 0;
}