#include <stdio.h>
int main(){
	
	int choice, i, j, index, input;
	int arr[100];
	do{
		printf("\nMENU \n1.Nhap vao mang \n2.Hien thi mang \n3.Them phan tu \n4.Sua phan tu \n5.Xoa phan tu \n6.Thoat \nLua chon cua ban la: ");
		scanf("%d", &choice);
		
		switch(choice){
			case(1):
				printf("nhap vao so phan tu muon nhap: ");
				scanf("%d",&j);
				printf("nhap vao %d phan tu:\n",j);
				for(i=0; i<j; i++){
					scanf("%d", &arr[i]);
				}
				break;
			case(2):
				for(i=0; i<j; i++){
				printf("arr[%d]=%d\n", i, arr[i]);
				}
				break;
			case(3):
				printf("nhap vi tri muon chen: ");
				scanf("%d", &index);
				printf("nhap vao phan tu chen: ");
				scanf("%d", &input);
				for(i=j; i>index; i--){
					arr[i]=arr[i-1];
				}
				arr[index]=input;
				j++;
				for(i=0; i<j; i++){
					printf("arr[%d] = %d\n", i, arr[i]);
				}
				break;
			case(4):
				printf("nhap vao vi tri muon sua: ");
				scanf("%d", &i);
				printf("sua thanh: ");
				scanf("%d", &input);
				arr[i-1]=input;
				break;
			case(5):
				printf("nhap vi tri muon xoa: ");
				scanf("%d", &index);
				for(i=index; i<j; i++){
					arr[i-1]=arr[i];
				}
				j--;
				for(i=0; i<j; i++){
				printf("arr[%d] = %d\n", i, arr[i]);
				}
				break;
			case(6):
				printf("Ket thuc chuong trinh!");
				break;
			default :
				printf("Khong hop le!\n");
		}
	}while(choice!=6);
	
	return 0;
}