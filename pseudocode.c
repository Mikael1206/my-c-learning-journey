/*
BEGIN
    DISPLAY "Welcome to the Fisherfolks' Weather Alert System"
    INPUT user's phone number
    INPUT user's name
    INPUT user's location
    DISPLAY "You will now receive weather updates for your location."

    INITIALIZE SMS gateway connection
    WHILE system is running DO
        FOR each registered user DO
            FETCH weather data from PAGASA and trusted APIs
            EXTRACT relevant weather information for user's location:
                - Rainfall
                - Wind Strength
                - Wave Height
                - Sunrise and Sunset times
                - Hazard Warnings

            IF severe weather or hazard detected for user's location THEN
                FORMAT weather alert message
                SEND SMS alert to user's phone number
            ELSE IF scheduled alert time THEN
                FORMAT regular weather update message
                SEND SMS update to user's phone number
            ENDIF
        ENDFOR
        WAIT for the next update interval

        IF SMS connection lost THEN
            RECONNECT to SMS gateway
        ENDIF
    ENDWHILE
    CLOSE SMS gateway connection
END
*/
#include <stdio.h>
#include <string.h>

int main(){

    int phoneNum;
    char name[50];
    char location[100];

    printf("Welcome to the Fisherfolks' Weather Alert System\n");

    printf("\nEnter your phone number:");
    scanf("%d", &phoneNum);
    getchar();

    printf("\nEnter your name:");
    fgets(name, 50, stdin);
    name[strlen(name)-1] = '\0';

    printf("\nEnter your Location:");
    fgets(location, 100, stdin);
    location[strlen(location)-1] = '\0';

    printf("\nYou will now receive weather updates for your location.\n");


    return 0;
}