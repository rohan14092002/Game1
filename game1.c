#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void main(){
    printf("---------------------------------------------------------------------------\n");
    printf("\t\t\tNUMBER GUESSING GAME\n");
    printf("---------------------------------------------------------------------------\n\n");
    srand(time(0));
    int a=( rand() % 100 + 1), b, c=0, k=10;
    printf("Guess a number between 1 to 100:\n");
    while (c==0 && k>0){
        scanf("%d", &b);
        if (a==b){
            printf("Correct Guess!!!!\n");
            c++;
            goto abc;
        }
        if(b<a && b>0){
            printf("Choose a bigger one\n");
        }
        else if(b>a && b<=100){
            printf("choose a smallar one\n");
        }
        else {
            printf("Guess a valid number\n");
        }
        k--;
    }
    abc:
    printf("\n---------------------------------------------------------------------------\n\n");

    if(k==10){
        printf("$$$$$$$$  BINGO  $$$$$$$$\n !!!!You got it in first guess!!!!");
    }
    else if(k<10 && k>5){
        printf("!!!!!  WELL DONE !!!!!\nYour score is: %d\nGood guess", k);
    }
    else if(k>0 && k<=5){
        printf(":) FORTUNATE ENOUGH\nYour score is: %d\n", k);
    }
    else{
        printf("OOOOOPSSS!!!!!!!!\nYour score is: %d\nBetter Luck Next Time", k);
    }

    printf("\n---------------------------------------------------------------------------\n\n");
    getch();
}