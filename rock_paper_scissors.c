#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int user();
int computer();
void winner(int userChoice, int computerChoice);

int main(){
    srand(time(0));
    printf("{ROCK PAPER SCISSORS}\n");
    int userChoice = user();
    int computerChoice = computer();

    

    switch(userChoice){
        case 1:
        printf("you chose rock\n");
        break;
        case 2:
        printf("you chose paper\n");
        break;
        case 3:
        printf("you chose scissors\n");
        break;
    }

    switch(computerChoice){
        case 1:
        printf("computer chose rock\n");
        break;
        case 2:
        printf("computer chose paper\n");
        break;
        case 3:
        printf("computer chose scissors\n");
        break;
    }
    winner(userChoice, computerChoice);

}    

int computer(){
    return (rand() % 3) + 1;
}
int user(){
    int choice;
    do{
        printf("choose an option (1 or 2 or 3)\n");
        printf("1. rock\n");
        printf("2. paper\n");
        printf("3. scissors\n");
        printf("enter your option : ");
        scanf("%d", &choice);
    }while(choice > 3 || choice <1);
    return choice;
}

void winner(int userChoice, int computerChoice){
    if(userChoice == computerChoice){
        printf("its a tie!\n");
    }
    else if((userChoice == 1 && computerChoice == 3) ||
        (userChoice == 2 && computerChoice == 1) ||
        (userChoice == 3 && computerChoice == 2)){
            printf("you win!\n");
        }
    else{
        printf("you lose!\n");
    }
}