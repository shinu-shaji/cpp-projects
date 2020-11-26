/*
 ============================================================================
 Name        : average_no1.c
 Author      : SHINU SHAJI STEBIN YOHANNAN
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int A[20], i, n, sum=0;
	float average=0,m;
	printf("Enter the number of elements in Array");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &A[i]);
	}
	for(i=0;i<n;i++)
	{
		sum += A[i];
	}
	m = n;
	average = sum/m;
	printf("average = %f",average);
}
