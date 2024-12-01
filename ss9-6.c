#include <stdio.h>
int main(){
	
	int choice, I, J, i, j, sum, product, maxSum, line;
	int arr[I][J];
	
	do{
		printf("\nMENU \n1.Nhap kich co va gia tri cac phan tu cua mang \n2.In gia tri cac phan tu cua mang theo ma tran \n3.In gia tri cac phan tu la le va tinh tong \n4.In ra cac phan tu nam tren duong bien va tinh tich \n5.In ra cac phan tu nam tren duong cheo chinh \n6.In ra cac phan tu nam tren duong cheo phu \n7.In ra dong co tong gia tri cac phan tu la lon nhat \n8.Thoat \nLua chon: ");
		scanf("%d", &choice);
		switch(choice){
			case(1):
				printf("Nhap so hang: ");
				scanf("%d", &I);
				printf("Nhap so cot: ");
				scanf("%d", &J);
				printf("Nhap cac phan tu:\n");
				for(i = 0; i < I; i++){
					for(j = 0; j < J; j++){
						scanf("%d", &arr[i][j]);	
					}
					printf("-----\n");
				}
				break;
			case(2):
				for(i = 0; i < I; i++){
					for(j = 0; j < J; j++){
						printf("%d\t",arr[i][j]);
					}
					printf("\n");
				}
				break;
			case(3):
				sum = 0;
			    printf("Cac phan tu le trong mang:\n");
			    for (i = 0; i < I; i++){
			        for (j = 0; j < J; j++){
			            if (arr[i][j] % 2 != 0) {
			                printf("%d ", arr[i][j]);
			                sum += arr[i][j];
			            }
			        }
			    }
			    printf("\nTong cac phan tu le: %d\n", sum);
			    break;
			case(4):
				product = 1;
			    printf("Cac phan tu nam tren duong bien:\n");
			    for (int i = 0; i < I; i++) {
			        for (int j = 0; j < J; j++) {
			            if (i == 0 || i == I-1 || j == 0 || j == J-1) {
			                printf("%d ", arr[i][j]);
			                product *= arr[i][j];
			            }
			        }
			    }
			    printf("\nTich cac phan tu duong bien: %d\n", product);
			    break;
			case(5):
				printf("cac phan tu tren duong cheo chinh cua ma tran la:\n");
			    for(i = 0; i < I; i++) {
			        for(j = 0; j < J; j++) {
			           if(i==j){
			           	printf("%d ", arr[i][j]);
					   }
			        }
			    }
			    break;
			case(6):
				printf("cac phan tu tren duong cheo phu cua ma tran la:\n");
			    for(i=0,j=J; i<=J,j>=0; i++,j--){
			    	printf("%d ", arr[i][j]);
				}
				break;
			case(7):
				maxSum = -1, line = 0;
			    for (int i = 0; i < I; i++) {
			        int sum = 0;
			        for (int j = 0; j < J; j++) {
			            sum += arr[i][j];
			        }
			        if (sum > maxSum) {
			            maxSum = sum;
			            line = i;
			        }
			    }
			    printf("Dong co tong lon nhat la dong %d voi tong = %d\n", line+1, maxSum);
			    break;
			case(8):
				printf("Ket thuc chuong trinh!");
				break;
			default:
				printf("Khong hop le!");
		}
	}while(choice!=8);
	return 0;
}