#include <stdio.h>
#include <string.h>

int main(){

    char type[25];
    int size;
    char currency[] = "₱";
    double price;
    double total;

    printf("What would you like to buy? ");
    fgets(type, sizeof(type), stdin);
    type[strlen(type) - 1] = '\0';

    printf("How many %s would you like to buy? ", type);
    scanf("%d", &size);

    printf("What is the price for each %s? ", type);
    scanf("%lf", &price);

    total = size * price;

    printf("Total of your purchased %s: %s%.2lf", type, currency, total);
    return 0;
}