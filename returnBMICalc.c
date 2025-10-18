#include <stdio.h>
#include <math.h>

double calculationOfBMI(float weight, float height);
const char* bmiClassification(double bmi);

int main(){

    float isWeight = 0.0f;
    float isHeight = 0.0f;
    double userBMI = 0.0;
    const char* isClassification = "";

    printf("Enter your Weight in kg: ");
    scanf("%f", &isWeight);

    printf("Enter your Height in meters: ");
    scanf("%f", &isHeight);

    userBMI = calculationOfBMI(isWeight, isHeight);
    isClassification = bmiClassification(userBMI);  

    printf("\nYou have a BMI of %.2lf %s.", userBMI, isClassification);

    return 0;
}

double calculationOfBMI(float weight, float height){
    return weight / pow(height, 2);
}

const char* bmiClassification(double bmi){
    if(bmi <= 18.5){
        return "and you are Underweight";
    }
    else if(bmi > 18.5 && bmi <= 24.9){
        return "and you are Healthy";
    }
    else if(bmi > 24.9 && bmi <= 29.9){
        return "and you are Overweight";
    }
    else{
        return "and you are Obese";
    }

}