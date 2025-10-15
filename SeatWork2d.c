#include <stdio.h>
#include <math.h>

int main(){
    char mathOperator;
    double firstNumber;
    double secondNumber;
    double result;

    printf("\nEnter an operator (+, -, *, /):");
    scanf("%c", &mathOperator);

    printf("\nEnter number 1:");
    scanf("%lf", &firstNumber);
    
    printf("\nEnter number 2:");
    scanf("%lf", &secondNumber);

    switch (mathOperator){
        case '+':
            result = firstNumber + secondNumber;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = firstNumber - secondNumber;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = firstNumber * secondNumber;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            result = firstNumber / secondNumber;
            printf("Result: %.2lf\n", result);
            break;
        default:
            printf("That's not valid. Please enter a correct operator.\n");
    }
    return 0;
}

