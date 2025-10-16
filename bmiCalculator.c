#include <stdio.h>
#include <math.h>

int main(){

    float usersWeight = 0.0f;
    float usersHeight = 0.0f;
    double usersBMI = 0.0;
    char usersClassification[15] = "";

    printf("Enter your Weight in Kilogram: ");
    scanf("%f", &usersWeight);

    printf("Enter your Height in meters: ");
    scanf("%f", &usersHeight);

    usersBMI = usersWeight / pow(usersHeight, 2);

    printf("\nYour BMI is: %.2lf", usersBMI);

    if(usersBMI <= 18.5){
        printf(" and you are Underweight.");
    }
    else if(usersBMI > 18.5 && usersBMI <= 24.9){
        printf(" and you are Healthy.");
    }
    else if(usersBMI > 24.9 && usersBMI <= 29.9){
        printf(" and you are Overweight.");
    }
    else{
        printf(" and you are Obese.");
    }


    return 0;
}