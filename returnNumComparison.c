#include <stdio.h>

int numComparison(int num1, int num2);

int main(){

    int firstNum = 0;
    int secondNum = 0;

    printf("Enter the first number: ");
    scanf("%d", &firstNum);

    printf("Enter the second number: ");
    scanf("%d", &secondNum);

    if(numComparison(firstNum, secondNum) == 1){
        printf("\n%d is greater than %d", firstNum, secondNum);
    }
    else if(numComparison(firstNum, secondNum) == 2){
        printf("\n%d is greater than %d", secondNum, firstNum);
    }
    else{
        printf("\n%d and %d are both equal to each other.", firstNum, secondNum);
    }
    return 0;
}

int numComparison(int num1, int num2){
    if(num1 > num2){
        return 1;
    }
    else if(num2 > num1){
        return 2;
    }
    else{
        return 3;
    }
}