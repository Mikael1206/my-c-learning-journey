//Compound Interest Formula
#include <stdio.h>
#include <math.h>

int main(){

    double principal;
    double rate;
    int years;
    int timesCompounded;
    double amount;

    printf("Compound Interest Calculator\n\n");

    printf("Enter the value of Principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the value of interest rate % (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the number of years (t): ");
    scanf("%d", &years);

    printf("Enter the number of times interest is compounded per year (n): ");
    scanf("%d", &timesCompounded);

    amount = principal * pow(1 +(rate / timesCompounded), timesCompounded * years);

    printf("After %d year/s, the amount will be: ₱%.2lf", years, amount);

    return 0;
}