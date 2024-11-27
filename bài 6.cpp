#include <stdio.h>
int main(){
    int array[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(array[i]%2==0){
        array[i]=array[i]+3;
        printf("array[%d]=%d\n",i,array[i]);
        }
        else{
            array[i]=array[i]+2;
        printf("array[%d]=%d\n",i,array[i]);
        }
    }
    return 0;
}
