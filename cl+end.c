#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void cl(void);

int main(void){
	
	int i = 0;
	char Input[60];
 	char clear[60] = "clear";
	char end[60] = "end";

start:

	printf("(input) ");
	scanf("%s", Input);

	i = strcmp (Input, clear);
	if (i == 0)
	{cl(); goto start;}

	else { 
	
	i = strcmp (Input, end);
	if (i == 0)
		exit(1);
	else{
		printf ("error\n");
	  	goto start;
	}}

	return 0;
}
void cl(void){
		system("clear");
}