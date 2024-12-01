#include <stdio.h>
int main(){
	
	int arr[100];
	int choice, i, j, sum, count, max, min, input, index;
	do{
		printf("\nMENU \n1.Nhap so phan tu can nhap va gia tri cac phan tu \n2.In ra gia tri cac phan tu dang quan ly \n3.In ra gia tri cac phan tu chan va tinh tong \n4.In ra gia tri lon nhat va nho nhat trong mang \n5.In ra cac phan tu la so nguyen to trong mang va tinh tong \n6.Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do \n7.Them mot phan tu vao vi tri chi dinh \n8.Thoat \nLua chon cua ban: ");
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
				printf("Cac so chan trong mang la: ");
				sum=0;
				for(i=0; i<j; i++){
					if(arr[i] % 2 == 0){
						sum += arr[i];
						printf("%d ", arr[i]);
					}
				}
				printf("\nTong cac so chan trong mang la: %d\n", sum);
				break;
			case(4):
				max = arr[0];
				min = arr[0];
				
				for(i=1;i<j;i++){
					if(arr[i] > max){
						max = arr[i];
					}
				}
				printf("So lon nhat trong mang la: %d\n",max);
				
				for(i=1;i<j;i++){
					if(arr[i] < min){
						min = arr[i];
					}
				}
				printf("So nho nhat trong mang la: %d",min);
				break;
			case(5):
				sum = 0;
				printf("Phan tu la so nguyen to:\n");
				for(i=0;i<j;i++){
					count=0;
					for(int m = 2; m <= arr[i]; m++){
						if(arr[i] % m == 0) {
						count++;
						}	
					}
					if(count == 1){
						printf("%d ", arr[i]);
						sum += arr[i];
					}
				}
				printf("Tong cac so nguyen to la: %d\n", sum);
				break;
			case(6):
				count=0;
				printf("nhap so: ");
				scanf("%d", &input);
				for(i=0;i<j;i++){
					if(input == arr[i]){
						count++;
					}
				}
				printf("So %d co %d phan tu\n", input, count);
				break;
			case(7):
				printf("nhap vi tri muon chen: ");
				scanf("%d", &index);
				printf("nhap vao phan tu chen: ");
				scanf("%d", &input);
				for(i=j; i>index; i--){
					arr[i]=arr[i-1];
				}
				arr[index]=input;
				j++;
				break;
			case(8):
				printf("Chuong trinh ket thuc!");
				break;
			default:
				printf("Khong hop le!\n");
		}
	}while(choice!=8);
	
	return 0;
}