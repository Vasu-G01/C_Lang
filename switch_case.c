#include<stdio.h>

int main(){
    //Calculator
    int a,b,add,sub,mult,num;
    printf("Enter Number : ");
    scanf("%d",&a);
    printf("Enter Number : ");
    scanf("%d",&b);
    add = a+b;
    sub = a-b;
    mult = a*b;
    printf("Enter Operation 1.Addition\n2.Subraction\n3.Multiplication\nChoose Operation : ");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("Addition : %d",add);
        break;
    case 2:
        printf("Subraction : %d",sub);
        break;
    case 3:
        printf("Multiplication : %d",mult);
        break;
    default:
        printf("Invalid Operation!!!");
        break;
    }
    return 0;
}