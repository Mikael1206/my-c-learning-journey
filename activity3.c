// Student Grade Report
// Author: An-joe Mikael T. Albano of BSCS 1-2
// Description: This program calculates and displays a student's average grade.
#include <stdio.h>
#include <string.h>

int main(){

    char nameOfStudent[50];
    char studentCollege[100];
    char studentProgram[100];
    int yearLevel;
    char yearSection[5];
    char studentID[20];
    int firstGrade;
    int secondGrade;
    int thirdGrade;
    double averageResult;

    printf("\33[32m=======================================\33[0m\n");
    printf("\33[36mWelcome to Student Grade Report.\n");
    printf("Please enter the following information.\33[0m\n");
    printf("\33[32m=======================================\33[0m\n\n");

    printf("\33[32m===========================================================================\33[0m\n\n");
    printf("\33[1mPlease indicate your full name:\33[0m ");
        fgets(nameOfStudent, sizeof(nameOfStudent), stdin);
        nameOfStudent[strlen(nameOfStudent) - 1] = '\0';

    printf("\33[1mPlease indicate which college or department you belong to:\33[0m ");
        fgets(studentCollege, sizeof(studentCollege), stdin);
        studentCollege[strlen(studentCollege) - 1] = '\0';

    printf("\33[1mPlease indicate your program:\33[0m ");
        fgets(studentProgram, sizeof(studentProgram), stdin);
        studentProgram[strlen(studentProgram) - 1] = '\0';

    printf("\33[1mPlease indicate your current year level:\33[0m ");
        scanf("%d", &yearLevel);

    getchar();
    printf("\33[1mPlease indicate your current section:\33[0m ");
        fgets(yearSection, sizeof(yearSection), stdin);
        yearSection[strlen(yearSection) - 1] = '\0';

    printf("\33[1mPlease indicate your student ID:\33[0m ");
        fgets(studentID, sizeof(studentID), stdin);
        studentID[strlen(studentID) - 1] = '\0';

    printf("\nWelcome, \33[3m%s\33[0m (Student ID: \33[3m%s\33[0m) from \33[3m%s\33[0m \33[3m%d-%s\33[0m, of College of \33[3m%s\33[0m.\n\n", nameOfStudent, studentID, studentProgram, yearLevel, yearSection, studentCollege);
    printf("\33[32m===========================================================================\33[0m\n\n");

    printf("To calculate the average of your desired subjects, please input them below.\n\n");

    printf("\33[1mEnter your grade in COMP 001:\33[0m ");
        scanf("%d", &firstGrade);

    printf("\33[1mEnter your grade in COMP 002:\33[0m ");
        scanf("%d", &secondGrade);

    printf("\33[1mEnter your grade in GEED 004:\33[0m ");
        scanf("%d", &thirdGrade);

    averageResult = (firstGrade + secondGrade + thirdGrade) / 3.0;
    
    printf("\n\33[32m===========================================================================\33[0m\n");
    printf("\33[1mStudent Name:\33[0m %s\n", nameOfStudent);
    printf("\33[1mStudent Program, Year, and Section:\33[0m %s %d-%s\n", studentProgram, yearLevel, yearSection);
    printf("\33[1mStudent ID:\33[0m %s\n", studentID);
    printf("\33[1mGrade in COMP 001:\33[0m %d\n", firstGrade);
    printf("\33[1mGrade in COMP 002:\33[0m %d\n", secondGrade);
    printf("\33[1mGrade in GEED 004:\33[0m %d\n", thirdGrade);
    printf("\33[32m===========================================================================\33[0m\n");
    printf("\33[1mAverage Grade:\33[0m %.2lf\n", averageResult);

    if(averageResult >= 75){
        printf("\33[34mYou Passed. Congrats!\33[0m");
    }
    else{
        printf("\33[31mYou FAILED!\33[0m");
    }
    return 0;
}