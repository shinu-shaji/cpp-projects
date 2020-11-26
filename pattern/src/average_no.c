/*
 ============================================================================
 Name        : average.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :  in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i ,j,n=5;
	//first half
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf("  ");
		}
		for(j=1;j<=i;j++){
				printf("%d ",j);
				}
		printf("\n");
	}
	//second half
	for(i=n-1;i>=0;i--){
			for(j=1;j<=n-i;j++){
				printf("  ");
			}
			for(j=1;j<=i;j++){
					printf("%d ",j);
					}
			printf("\n");
		}
}
