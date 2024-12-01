#include <stdio.h>
int main() {
	int input;
	int i;
	int arr[]={1,2,3,4,5,6};
	int length=sizeof(arr)/sizeof(arr[0]);
	printf("mang arr: ");
	for(i=0; i<length; i++){
		printf("%d ",arr[i]);
	}
	do{
		printf("\nnhap vao vi tri can sua:");
		scanf("%d", &i);
		if(0>=i || i>length){
			printf("vi tri khong hop le! \n");
			continue;
		}
	}while(0>=i || i>length);
	printf("nhap vao so muon sua:");
	scanf("%d", &input);
	arr[i-1]=input;
	printf("gia tri cua mang sau khi sua la: ");
	for(i=0; i<length; i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}