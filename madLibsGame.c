#include <stdio.h>
#include <string.h>

int main(){
    char noun[25];
    char verb[25];
    char adjectiveOne[25];
    char adjectiveTwo[25];
    char adjectiveThree[25];

    printf("Enter an adjective (description): ");
    fgets(adjectiveOne, sizeof(adjectiveOne), stdin);
    adjectiveOne[strlen(adjectiveOne) - 1] = '\0';

    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjectiveTwo, sizeof(adjectiveTwo), stdin);
    adjectiveTwo[strlen(adjectiveTwo) - 1] = '\0';

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjectiveThree, sizeof(adjectiveThree), stdin);
    adjectiveThree[strlen(adjectiveThree) - 1] = '\0';
   
    printf("\nLater today, I went to the %s house. ", adjectiveOne);
    printf("Only to find out that %s %s on the floor. ", noun, verb);
    printf("After that, %s saw me and %s me, then %s the tree.", noun, adjectiveTwo, adjectiveThree);

    return 0;
}