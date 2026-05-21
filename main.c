#include <stdio.h>
#include <stdbool.h>
#include "parsexec.h"

static char input[100] = "look around";

static bool getInput(void);

int main(void){
	printf("Welcome to Little Cave Adventures.\n");
	printf("It is very dark in here.\n");
	while(parseAndExecute(input) && getInput());
	printf("Bye-bye!\n");
	
	return 0;
}

static bool getInput(void){
	printf("\n> ");
	return ((fgets(input, sizeof(input), stdin) != NULL));
}