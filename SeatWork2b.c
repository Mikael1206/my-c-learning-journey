#include <stdio.h>
#include <string.h>

int main(){
    char nameOfUser[25];

    printf("\nPlease tell me your name hehe: ");
    fgets(nameOfUser, 25, stdin);
    nameOfUser[strlen(nameOfUser)-1] = '\0';

    printf("Magandang araw sa'yo, %s! Isa ka nang ganap na Bro.\n", nameOfUser);
    
    return 0;
}