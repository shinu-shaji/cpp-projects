/*
 ============================================================================
 Name        : prime.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int no; //initialize no
	int rem; // initialize reminder
	for(no=2;no<=100;no++){ // loop of numbers
		rem = 0; //reset reminder
		for(int i=2;i<=no;i++){ //loop of divident
				if(no%i==0){  //check if reminder is zero
					rem = rem+1;
				}
				if(rem>=2){break;}
		}
		if(rem<2){printf("%d \n",no);} //print the prime no
	}
	return EXIT_SUCCESS;
}
