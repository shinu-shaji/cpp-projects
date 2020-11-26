/*
 ============================================================================
 Name        : capital_case.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void printalph(int val){
			if(val>=97 && val<=122){
				printf("%c",val);
				printalph(val+1);
			}
			else if (val>=65 && val<=90){
				printf("%c",val);
				printalph(val+1);

			}
}


int main(void) {
	char val='a';
	if(val>=97 && val<=122){

					printalph(97);
				}
	else if (val>=65 && val<=90){

					printalph(65);
	}


	return EXIT_SUCCESS;
}
