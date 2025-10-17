#include <stdio.h>
#include <string.h>

int main(){

    char isCoffeeSize[10] = "";
    const int isPrice = 150;
    double result = 0.0;
    
    printf("Welcome to our Coffe Shop!\n");
    printf("All of our coffee starts at 150 pesos.\n");

    printf("\nEnter coffee size (small/medium/large): ");
    fgets(isCoffeeSize, sizeof(isCoffeeSize), stdin);
    isCoffeeSize[strlen(isCoffeeSize) - 1] = '\0';

    printf("\n=============================================\n");

    if(strcmp(isCoffeeSize, "small") == 0){
        result = 150 + 15;
        printf("The price of your coffee is: %.2lf", result);
    }
    else if(strcmp(isCoffeeSize, "medium") == 0){
        result = 150 + 20;
        printf("The price of your coffee is: %.2lf", result);
    }
    else if(strcmp(isCoffeeSize, "large") == 0){
        result = 150 + 25;
        printf("The price of your coffee is: %.2lf", result);
    }
    else{
        printf("Invalid! Please enter only the appropriate size (small/medium/large).");
    }

    return 0;
}