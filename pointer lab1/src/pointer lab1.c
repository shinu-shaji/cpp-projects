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

int main(void) {
	int   m = 300 ;
	float fx = 300.600006 ;
	char  cht = 'z' ;

	printf("address of m is %p \n",&m ); // address of m
	printf("address of fx is %p \n",&fx ); // address of fx
	printf("address of cht is %p \n",&cht ); // address of cht

	printf("value at address of m is %d \n",*(&m) ); // extract value of m using *
	printf("value at address of fx is %f \n",*(&fx) ); // extract value of fx using *
	printf("value at address of cht is %c \n",*(&cht) );// extract value using cht *
    // declare all pointer type variables
	int *p_m;
	float *p_fx ;
	char *p_cht ;
	//initialize all pointer variables
	p_m = &m ; p_fx = &fx ; p_cht = &cht ;
	printf("address of m is %p \n",p_m );//print pointer pointing address
	printf("address of fx is %p \n",p_fx );//print pointer pointing address
	printf("address of cht is %p \n",p_cht );//print pointer pointing address

	printf("value at address of m is %d \n",*(p_m) );//print the value of the pointed address
	printf("value at address of fx is %f \n",*(p_fx) );//print the value of the pointed address
	printf("value at address of cht is %c \n",*(p_cht) );//print the value of the pointed address




	return EXIT_SUCCESS;
}
