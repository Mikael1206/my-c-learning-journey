#include <stdio.h>
#include <string.h>

int main(){

    float ticketPrice = 0.0f;
    int isAge = 0;
    char timeOfTheDay[10] = "";

    printf("What is the price of the ticket? ");
    scanf("%f", &ticketPrice);

    printf("Enter your age: ");
    scanf("%d", &isAge);

    getchar();
    printf("Enter the time you'll watch (Daytime or Evening): ");
    fgets(timeOfTheDay, sizeof(timeOfTheDay), stdin);
    timeOfTheDay[strlen(timeOfTheDay) - 1] = '\0';

    if(strcmp(timeOfTheDay, "Daytime") == 0){
        if(isAge >= 0 && isAge <= 12){
            double discounted = ticketPrice - (ticketPrice * 0.1); //kids have 10% discount
            printf("\nYou are a child. Your ticket is now discounted to %.2lf", discounted);
        }
        else if(isAge >= 18 && isAge <= 59){
            printf("\nYou are an adult. Your ticket is still %.2f", ticketPrice);
        }
        else if(isAge >= 60){
            double discounted = ticketPrice - (ticketPrice * 0.2); //seniors have 20% discount
            printf("\nYou are a senior. Your ticket is now discounted to %.2lf", discounted);
        }
        else{
            printf("\nInvalid!");
        }
    }
    else if(strcmp(timeOfTheDay, "Evening") == 0){
        if(isAge >= 0 && isAge <= 12){
            double eveningDiscount = ticketPrice - (ticketPrice * 0.05); //evening screening have 5% discount to all audience
            double discounted = eveningDiscount - (ticketPrice * 0.1); //kids have 10% + 5% discount
            printf("\nYou are a child. Your ticket is now discounted to %.2lf", discounted);
        }
        else if(isAge >= 18 && isAge <= 59){
            double discounted = ticketPrice - (ticketPrice * 0.05); //evening screening have 5% discount
            printf("\nYou are an adult. Your ticket is still %.2f", discounted);
        }
        else if(isAge >= 60){
            double eveningDiscount = ticketPrice - (ticketPrice * 0.05); //evening screening have 5% discount to all audience
            double discounted = eveningDiscount - (ticketPrice * 0.2); //seniors have 20% discount
            printf("\nYou are a senior. Your ticket is now discounted to %.2lf", discounted);
        }
        else{
            printf("\nInvalid!");
        }
    }
    return 0;
}