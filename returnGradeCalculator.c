#include <stdio.h>

const char* userLetterGrade(float grade){
    if (grade >= 90){
        return "Lol";
    }
    else if(grade >= 80){
        return "Ngek";
    }
    else if(grade >= 75){
        return "luh";
    }
    else{
        return "Bagsak";
    }
}

int main(){

    float isGrade = 0.0f;
    const char* isLetterGrade = "";

    printf("Enter your score: ");
    scanf("%f", &isGrade);

    isLetterGrade = userLetterGrade(isGrade);

    printf("\nYour grade is: %s", isLetterGrade);

    return 0;
}