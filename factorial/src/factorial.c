/*
 ============================================================================
 Name        : factorial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fact(int no){ // factorial function
	int val;
	if(no>0){  // run if number if greater than 0
	printf("%d",no); //print the number
	if(no>1)printf(" * "); //print *
	val = no*fact(no-1); // call the function
	return val; //return the value
	}
	else {return 1;} //if number is less than 1 return 1

	}


int main(void) {
	int val;
	int n;
	printf("enter a number : "); // enter a no
	scanf("%d",&n);
	printf("\nfactorial of a number : ");
	val = fact(n); // call the function fact

	printf(" = %d",val);
	return EXIT_SUCCESS;
}
