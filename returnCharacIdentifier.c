#include <stdio.h>

char characIdentifier(char character);

int main(){

    char isCharacter = '\0';
    int result = 0;

    printf("Enter any character: ");
    scanf("%c", &isCharacter);

    result = characIdentifier(isCharacter);

    if(result == 1){
        printf("\n%c is an Alphabet character.", isCharacter);
    }
    else if(result == 2){
        printf("\n%c is an Integer character.", isCharacter);
    }
    else{
        printf("\n%c is a Special character.", isCharacter);
    }

    return 0;
}

char characIdentifier(char character){
    if((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')){
        return 1;
    }
    else if(character >= '0' && character <= '9'){
        return 2;
    }
    else{
        return 3;
    }
}