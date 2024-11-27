#include<stdio.h>
int main (){
	int array[5]= {1,2,3,4,5};
	int dodai = sizeof(array)/sizeof(array[0]);
	printf("Cac phan tu trong mang:\n");
	for(int i=0;i<dodai;i++){
		printf("array[%d]=%d\n",i,array[i]);
	
	}
	printf("Do dai cua mang la : %d\n",dodai);
	return 0;
}
