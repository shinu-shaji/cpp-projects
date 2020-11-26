/*
 ============================================================================
 Name        : median.c
 Author      : shinu shaji,stebin yohannan
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int A[20], j, n, i, temp,test;
	float median=0,m;
	printf("enter the total no of elements");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
		{
			scanf("%d",&A[i]);
		}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (A[i]> A[j]){
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}

		}
		printf("sorted array: ");
		for(i=0;i<n;i++){
			printf("%d ",A[i]);
		}
		if(n%2==0)
			{	m = (A[n/2]+A[(n-2)/2]);
				median = m/2;
			}
			else
			{
				median = A[n/2];
			}
			printf("median is %f ",median);
}
