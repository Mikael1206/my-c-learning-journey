#include <stdio.h>

int numPicker(int num1, int num2, int num3);

int main(){

    int firstNum = 0;
    int secondNum = 0;
    int thirdNum = 0;

    printf("Enter the 3 numbers (must have spaces): ");
    scanf("%d %d %d", &firstNum, &secondNum, &thirdNum);

    printf("\nThe highest number is: %d", numPicker(firstNum, secondNum, thirdNum));
    return 0;
}

int numPicker(int num1, int num2, int num3){
    if(num1 > num2 && num1 > num3){
        return num1;
    }
    else if(num2 > num1 && num2 > num3){
        return num2;
    }
    else{
        return num3;
    }
}