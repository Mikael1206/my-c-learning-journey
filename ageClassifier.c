#include <stdio.h>

int main(){

    int ageOfUser = 0;

    printf("Enter your age: ");
    scanf("%d", &ageOfUser);

    if(ageOfUser < 0){
        printf("You haven't born yet.");
    }
    else if(ageOfUser >= 0 && ageOfUser <= 2){
        printf("Your are an Infant.");
    }
    else if(ageOfUser >= 3 && ageOfUser <= 12){
        printf("You are a Child.");
    }
    else if(ageOfUser >= 13 && ageOfUser <= 19){
        printf("You are a Teen.");
    }
    else if(ageOfUser >= 20 && ageOfUser <= 59){
        printf("You are an Adult.");
    }
    else if(ageOfUser >= 60){
        printf("You are Senior.");
    }
    else{
        printf("That's Invalid!");
    }

    return 0;
}