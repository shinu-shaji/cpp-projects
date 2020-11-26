/*
 ============================================================================
 Name        : pointer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// function to find maximum value
void max_val(int *a,int *b,int *max){
	if(*a > *b){ //compare the values
		*max= *a;  // if a is greater than b a is larger
	}
	else{ *max  = *b; }
}
int main(void) {
	int a , b , max = 0 ; //declare the variables
	printf("Input the first number : \n");
	scanf("%d",&a); // take inputs
	printf("Input the second number : \n");
	scanf("%d",&b); // take inputs
	max_val(&a,&b,&max); // call the function by reference
	printf("%d is the maximum value",max); // print the output
	return EXIT_SUCCESS;
}
