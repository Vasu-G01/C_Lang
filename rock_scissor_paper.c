#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int myGame(char user,char comp){
    // z ---> Scissor
    // p ---> Papper
    // s ---> Stone
    if (user==comp){
        return -1;
    }
    if(user == 's' && comp == 'p'){
        return 0;        
    }
        else if(user=='p' && comp=='s'){
            return 1;
        }
    if(user=='s' && comp=='z'){
        return 1;
    }
    else if(user=='z' && comp=='s'){
        return 0;
    }
    if(user=='p' && comp=='z'){
        return 0;
    }
    else if(user=='z' && comp=='p'){
        return 1;
    }
}

int main(){
    int n;
    char user,comp,result;
    srand(time(NULL));
    n=rand()%100;

    if(n<33){
        comp='s';
    }
    else if(n>33 && n<66){
        comp='p';
    }
    else{
        comp='z';
    }

    printf("Enter One of Them: \ns(Scisson)\np(Paper)\nz(Scissor): ");
    scanf("%c",&user);
    result=myGame(user,comp);
    if(result==-1){
        printf("Match is Draw\n");
        }
    else if(result==1){
        printf("You Won The Game\n");
    }
    else{
        printf("You Lost the Game");
    }
    printf("User Choice : %c\nComp Choice : %c",user,comp);
    return 0;
}