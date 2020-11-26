#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>

void test_thread(void *aa){ // @suppress("No return")

	int (*abc)[20][20] = aa;
	for(int x=1 ;x<19;x++){
		for(int y=1;y<19;y++){
			int val = (*abc)[x-1][y-1]+(*abc)[x-1][y]+(*abc)[x-1][y+1]
				     +(*abc)[x][y-1]                 +(*abc)[x][y+1]
					 +(*abc)[x+1][y-1]+(*abc)[x+1][y]+(*abc)[x+1][y+1];
			if(val<=3&&val>=2){(*abc)[x][y]= 1; }
			else if(val>3){(*abc)[x][y]= 0;}
			else if(val<2){(*abc)[x][y]= 0;}
		}
	}
	/*for(int i=0;i<20;i++){
	        	printf("\n");
	        	for(int j=0;j<20;j++)
	        	{
	        		printf("%d ",(*abc)[i][j]);
	        }}*/

}

int main() {

	    int size = 20;
        int arr[size][size];
        memset(arr,0,sizeof(arr));
        for(int i=1 ;i<19;i++){
        	arr[i][1] = 1;}
        for(int i=1 ;i<19;i++){
                	arr[i][3] = 1;}
        //memset(arr,0,sizeof(arr));


        //pthread_t thread_test;
        //pthread_create(&thread_test,NULL,test_thread,arr);
        //pthread_join(thread_test,NULL);
        for(int i = 0;i<1;i++){test_thread(arr);}
        for(int i=0;i<size;i++){
        	printf("\n");
        	for(int j=0;j<size;j++)
        	{
        		printf("%d ",arr[i][j]);
        }
        }

}
