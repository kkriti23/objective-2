#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int GetRandomNumber(int n){
    srand(time(NULL));
    int t=rand()%n+1;
    return t;
}
char name(int n){
	if(n==1){
		printf("rock");
	}else if(n==2){
		printf("paper");
	}else if(n==3){
		printf("scissors");
	}
}
int main()
{
    printf("---ROCK-PAPER-SCISSOR---\n");
    int winC=0,winP=0;
    while(winC!=3 && winP!=3){
    printf("Rock=1\nPaper=2\nScissors=3\nEnter your choice : ");
    int choice;
    scanf("%d",&choice);
    if(choice>3||choice<1){
        printf("Invalid Choice\n\n\n");
    }else{
    //printf("%d\n",choice);
    printf("player1 : ");
    name(choice);
    int comp=GetRandomNumber(2);
    printf("\ncomputer : ");
    name(comp);
    switch(choice){
        case 1:
            if(comp==1){
                printf("\nDraw! Again\n\n\n");
            }else if(comp==2){
                winC++;
                printf("\ncomputer wins - %d\n\n\n",winC);
            }else if(comp==3){
                winP++;
                printf("\nplayer1 wins -%d\n\n\n",winP);
            }
        break;
        case 2:
            if(comp==1){
                winP++;
                printf("\nplayer1 wins - %d\n\n\n",winP);
            }else if(comp==2){
                printf("\nDraw again\n\n\n");
            }else if(comp==3){
                winC++;
                printf("\nCompuer wins - %d\n\n\n",winC);
            }
        break;
        case 3:
            if(comp==1){
                winC++;
                printf("\nComputer wins - %d\n\n\n",winC);
            }else if(comp==2){
                winP++;
                printf("\nplayer1 wins - %d\n\n\n",winP);
            }else if(comp==3){
                printf("\nDraw! Again\n\n\n");
            }
        break;
    }
    if(winP==3){
        printf("-----Player1 WINS-----");
    }else if(winC==3){
        printf("-----Computer WINS------");
    }
    }
    }
}