#include<stdio.h>

int main(){
    int myNum[]={25,33,54,76,21};
    int i;
    for(i=0;i<5;i++){
        printf("%d\n",myNum[i]);
    }
    printf("Size of Array: %d\n",sizeof(myNum));
    int avg,length,sum=0;
    length=sizeof(myNum)/sizeof(myNum[0]);
    printf("Length of array : %d\n",length);
    for(i=0;i<length;i++){
        sum+=myNum[i];
    }
    avg=sum/length;
    printf("Avg of Array : %d",avg);
    return 0;
}