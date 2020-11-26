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
	for(i=1;i<=n;i++){
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--){
			for(j=i;j>=1;j--){
				printf("%d ",j);
			}
			printf("\n");
		}
}
