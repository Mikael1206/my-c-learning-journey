#include <stdio.h>
#include <string.h>

int main(){
    char unit;
    double temp;

    printf("\nEnter the temperature in (C)elcius or (F)ahrenheit:");
    scanf("%c", &unit);

    if (unit == 'C'){
        printf("\nEnter the temperature in Celcius:");
        scanf("%lf", &temp);
        temp = (temp * 9/5) + 32;
        printf("The temperature in Fahrenheit is: %.2lf F\n", temp);
    }
    else if(unit == 'F'){
        printf("\nEnter the temperature in Fahrenheit:");
        scanf("%lf", &temp);
        temp = (temp - 32) * 5/9;
        printf("The temperature in Celsius is: %.2lf C\n", temp);
    }
    else{
        printf("Please enter a valid unit (C or F).\n");
    }
    return 0;
}