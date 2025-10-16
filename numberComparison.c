#include <stdio.h>

int main(){

    int firstNum = 0;
    int secondNum = 0;

    printf("Enter your first number: ");
    scanf("%d", &firstNum);

    printf("Enter your second number: ");
    scanf("%d", &secondNum);

    if(firstNum > secondNum){
        printf("\nNo. %d is greater than No. %d", firstNum, secondNum);
    }
    else if(secondNum > firstNum){
        printf("\nNo. %d is greater than No. %d", secondNum, firstNum);
    }
    else{
        printf("\nNumbers %d and %d are equivalent to each other.", firstNum, secondNum);
    }
    return 0;
}