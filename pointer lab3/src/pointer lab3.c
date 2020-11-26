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
// sort array function
void sort_arr(int *p_arr,int no_elem){ // get the address
	int temp=0;
	for(int i=0;i<no_elem;i++){ // loop through the array address
			for(int j = i+1;j<no_elem;j++){
				if(*(p_arr+i) > *(p_arr+j)){ // if the previous value is greater swap the element
					temp=*(p_arr+i);
					*(p_arr+i) = *(p_arr+j);
					*(p_arr+j) = temp;
				}
			}

				}
}
int main(void) {
	int no_elem=0;
	printf("Input the number of elements to store in the array : ");
	scanf("%d",&no_elem); // total no of elements
	int arr[no_elem-1];
	printf("Input %d number of elements in the array : \n",no_elem);
	for(int i=0;i<no_elem;i++){ // loop through the array
		printf("element - %d : ",(i+1));
		scanf("%d",&arr[i]);
			}
	sort_arr(&arr,no_elem); //pass the array address and variables
	printf("The elements in the array after sorting : \n");
	for(int i=0;i<no_elem;i++){  //print the variables
		printf("element - %d : %d\n",(i+1),arr[i]);

			}
	return EXIT_SUCCESS;
}
