/*
1. Prompt the user to enter their monthly income, age, and desired loan amount.
2. Monthly income must be at least P15,000.
3. Age must be between 18 and 65.
4. Loan amount should not exceed 10 times the monthly income.
*/

#include <stdio.h>

void isWelcomingPrompt();
int isCheckingEligibility(float income, int age, float loan);

int main(){

    float isUserIncome = 0.0f;
    int isUserAge = 0;
    float isDesiredLoan = 0.0f;

    isWelcomingPrompt();

    printf("\n\33[1mEnter monthly income:\33[0m ");
    scanf("%f", &isUserIncome);

    printf("\33[1mEnter your age:\33[0m ");
    scanf("%d", &isUserAge);

    printf("\33[1mEnter desired program loan amount:\33[0m ");
    scanf("%f", &isDesiredLoan);

    int eligibility = isCheckingEligibility(isUserIncome, isUserAge, isDesiredLoan);

    printf("\33[32m=========================================================\33[0m");

    if(eligibility == 1){
        printf("\n\33[34mCongratulations! You are eligible for the loan.\33[0m");
    }
    else {
        printf("\n\33[31mSorry, you do not meet the loan eligibility requirements.\33[0m");
    }

    if(isUserIncome < 15000){
        printf("\n\33[3m--Your income must be at least P15,000.--\33[0m");
    }
    if(isUserAge < 18){
        printf("\n\33[3m--You must be at least 18 years old.--\33[0m");
    }
    else if(isUserAge > 65){
        printf("\n\33[3m--User's above 65 years old are not eligible.--\33[0m");
    }
    if(isDesiredLoan > isUserIncome * 10){
        printf("\n\33[3m--Your loan amount should not exceed 10 times the monthly income.--\33[0m");
    }
}

void isWelcomingPrompt(){
    printf("\33[32m============================================\33[0m\n");
    printf("\33[34mWelcome to Loan Eligibility Checker!\n");
    printf("Please indicate the following requirements.\33[0m\n");
    printf("\33[32m============================================\33[0m\n");
}

int isCheckingEligibility(float income, int age, float loan){
    if(income < 15000){
        return 0;
    }
    if(age < 18 || age > 65){
        return 0;
    }
    if(loan > income * 10){
        return 0;
    }
        return 1;
}

/*
#include <stdio.h>

int main(){

    float isUserIncome = 0.0f;
    int isUserAge = 0;
    float isDesiredLoan = 0.0f;

    printf("Enter monthly income: ");
    scanf("%f", &isUserIncome);

    printf("Enter your age: ");
    scanf("%d", &isUserAge);

    printf("Enter desired program loan amount: ");
    scanf("%f", &isDesiredLoan);

    if(isUserIncome >= 15000){
        if(isUserAge <= 18 && isUserAge >= 65){
            if(isDesiredLoan <= isUserIncome * 10){
                printf("\nCongratulations! You are eligible for the loan.");
            }
            else{
                printf("\nSorry, you do not meet the loan eligibility requirements.");
            }
        }
        else{
            printf("\nSorry, you do not meet the loan eligibility requirements.");
        }
    }
    else{
        printf("\nSorry, you do not meet the loan eligibility requirements.");
    }

    return 0;
}*/