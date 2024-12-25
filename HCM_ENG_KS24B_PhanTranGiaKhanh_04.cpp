#include<stdio.h>
int MAX_SIZE = 100;
int size = 0;

int main(){
	int array[MAX_SIZE];
	while(1){
	printf("MENU\n");
	printf("1. Nhap so phan tu va gia tri cho mang\n");
	printf("2. In ra gia tri cac phan tu trong mang\n");
	printf("3. Dem so luong cac so hoan hao co trong mang\n");
	printf("4. Tim gia tri lon thu 2 trong mang\n");
	printf("5. Them mot phan tu vao vi tri ngau nhien trong mang\n");
	printf("6. Xoa phan tu\n");
	printf("7. sap xep mang theo thu tu tang dan\n");
	printf("8. Tim kiem phan tu\n");
	printf("9. Sap xep mang so chan dung truoc so le dung sau\n");
	printf("10. Dao nguoc thu tu cua cac phan tu co trong mang\n");
	printf("11. Thoat\n");
	int choice;
	printf("nhap chuc nang: ");
	scanf("%d", &choice);
	switch(choice){
	case 1:
	printf("nhap so phan tu cho mang: ");
	scanf("%d", &size);
		for(int i = 0; i < size; i++){
		printf("array[%d] = ", i);
		scanf("%d", &array[i]);
		}
		printf("\n\n");
		break;
	case 2:
		if(size == 0){
		printf("mang khong co phan tu nao");
		}else{
		for(int i = 0; i < size; i++){
			printf("array[%d] = %d\n", i, array[i]);
		}
	}
		printf("\n\n");
		break;
	case 3:
		int sum = 0;
		int dem = 0;
		int value = 0;
		for(int i = 0; i <= size; i++){
			if(array[i] % i == 0){
				sum+=i;
				dem++;
				}
			if(sum == array[i]){
				value = 1;
				}
			}
			if(value == 1){
				printf("so luong so hoan hao trong mang la: %d\n", dem);
			}else{
				printf("mang khong co so hoan hao nao");
			}
		printf("\n\n");
		break;
    case 4: 
 		break;
 	case 5:
		int a, b;
		printf("nhap phan tu muon them: ");
		scanf("%d", &a);
		printf("nhap vi tri muon them vao: ");
		scanf("%d", &b);
		if(a < 0){
			a = 0;
		}else if(a > size){
			a = size;
		}
		for(int i = size; i > a; i--){
			array[i] = array[i - 1];
		}
		array[a] = b;
		size++
		printf("them thanh cong\n");
		printf("\n\n");
		break;
	case 6:	
		int xoa;
		printf("nhap vi tri can xoa: ");
		scanf("%d", &xoa);
		if(xoa < 0 || xoa >= size){
			printf("vi tri khong hop le\n");
			break;
		}
		for(int i = xoa; i < size - 1; i++){
			array[i] = array[i + 1];
		}
		size--
		printf("xoa thanh cong\n");]
		printf("\n\n");
		break;
	case 7:
	for(int i = 1; i < size; i++){
		int key = array[i];
		int j = i - 1;
		while(j >= 0 && key < array[i]){
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
	}
	printf("\n\n");
	break;
	case 8:
	int so;
	int start = 0;
	int end = size - 1
	int mid;
	printf("nhap phan tu muon tim: ");
	scanf("%d", &so);
	while(start <= end){
		mid = start + (end - start)/2;
		if(array[mid] == so){
			printf("\n%d duoc tim thay tai vi tri %d", so, mid);
			break;
		}else if(array[mid] < so){
			start = mid + 1;
		}else{
			end = mid - 1;
		}
	}
	if(start > end){
		printf("\nkhong tim thay gia tri %d trong mang", so);
	}
	printf("\n\n");
	break;
	case 11:
	break;
	default:
	printf("khong hop le");	
	break;	
}
	if(choice == 11){
		printf("thoat chuong trinh");
		break;
	}
}
return 0;
}
