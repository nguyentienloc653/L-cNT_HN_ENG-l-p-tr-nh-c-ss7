#include<stdio.h>
int main (){
	int array[5];
	printf("Nhap 5 phan tu :");
	 for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu thu : %d\n: ", i + 1);
    } 
	printf("Nhap 5 phan tu trong mang \n:");
	 for (int i = 0; i < 5; i++) {
        printf("Nhap cac phan tu thu : %d\n ", i + 1);
        scanf("%d", &array[i]);
    }
}
