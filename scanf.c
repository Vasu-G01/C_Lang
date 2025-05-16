//Scanf() is used to get input from user

//Write the program to calculate Simple Interest and take data from user.

#include<stdio.h>

int main(){
    int p,r,t,si;
    printf("Principal : ");
    scanf("%d",&p);
    printf("ROI : ");
    scanf("%d",&r);
    printf("Time Period : ");
    scanf("%d",&t);
    si = (p*r*t)/100;
    printf("Simple Interest : %d",si);
}