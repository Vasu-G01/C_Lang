#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Number A: ");
    scanf("%d",&a);
    printf("Enter Number B: ");
    scanf("%d",&b);
    if(a!=b){
        if(a>b){
            printf("A is Greater!!!");
        }
        else{
            printf("B is Greater!!!");
        }
    }
    else{
        printf("Both are Equal");
    }
}