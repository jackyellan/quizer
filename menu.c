#include <stdio.h>
#include <string.h>
#include "menu.h"


void menu(void) {

    char choice[50];

    printf("Welcome to the Travis Scott quiz.\n");

while(1){
    
    printf("Type: 'start' to start or 'quit' to exit: \n");
    scanf("%49s", choice);

    if (strcmp(choice, "start") == 0) {
        printf("Starting quiz.\n");
        break;
    }

    else if (strcmp(choice, "quit") == 0) {
        printf("Quiting program.\n");
        break;
    }

    else{
        printf("Invalid input.\n");

    }
}

}

