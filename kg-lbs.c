#include <stdio.h>
#include <math.h>

int main(){
    int choice;
    double kilograms;
    double pounds;
    double conversion;

    printf("Welcome to Kilograms-Pounds (vice versa) Conversion.\n\n");
    printf("Please select what you want to convert.\n\n");
    printf("1. Kilograms to Pounds.\n");
    printf("2. Pounds to Kilograms.\n\n");

    printf("Enter either 1 or 2: ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter the number in Kilograms: ");
        scanf("%lf", &kilograms);
        conversion = kilograms * 2.20462;
        printf("%.2lf kg is equivalent to %.2lf lbs.", kilograms, conversion);
    }
    else if(choice == 2){
        printf("Enter the number in Pounds: ");
        scanf("%lf", &pounds);
        conversion = pounds / 2.20462;
        printf("%.2lf lbs is equivalent to %.2lf kg", pounds, conversion);
    }
    else{
        printf("That's invalid! Please enter 1 or 2.");
    }

    return 0;
}