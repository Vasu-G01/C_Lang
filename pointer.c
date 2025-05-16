#include<stdio.h>
int main(){
    int i = 72;
    int *ptr = &i;
    int _i = *ptr;
    printf("_i : %d\n",_i); 
    printf("i : %d\n",i);
    printf("The Address of i is : %p",&i);
    return 0;
}