#include<stdio.h>
int main (){
	int array[5]={1,2,3,4,5};
	int nember=0;
	for(int i=0;i<5;i++){
		if(array[i] % 2 ==0){
			printf("%d\n",array[i]);
			nember=1;
		}
	}
	if(nember=0){
		printf("mang khong chua so chan\n");
	}
	return 0;
}
