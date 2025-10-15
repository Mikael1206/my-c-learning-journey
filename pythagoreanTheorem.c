#include <stdio.h>
#include <math.h>

//Pythagorean Theorem
int main(){
    char sides;
    double a;
    double b;
    double c;
    double result;
    char again;


    printf("What side is missing? (a, b, c): ");
    scanf("%c", &sides);

    switch(sides){
        case 'a':
            printf("\nEnter side b: ");
            scanf("%lf", &b);

            printf("Enter side c: ");
            scanf("%lf", &c);

            if(c <= b){
                printf("Error! Hypotenuse (c) must be longer than side b.");
            }
            else{
                result = sqrt(pow(c, 2) - (b, 2));
                printf("The side a is: %.2lf", result);
            }
            break;
        case 'b':
            printf("\nEnter side a: ");
            scanf("%lf", &a);

            printf("Enter side c: ");
            scanf("%lf", &c);

            if(c <= a){
                printf("Error! Hypotenuse (c) must be longer than side a.");
            }
            else{
                result = sqrt(pow(c, 2) - (a, 2));
                printf("The side b is: %.2lf", result);
            }
            break;
        case 'c':
            printf("\nEnter side a: ");
            scanf("%lf", &a);

            printf("Enter side b: ");
            scanf("%lf", &b);

            result = sqrt(pow(a, 2) + pow(b, 2));

            printf("The side c is: %.2lf", result);
            break;
        default:
            printf("That's not valid.");
    }
    return 0;
}