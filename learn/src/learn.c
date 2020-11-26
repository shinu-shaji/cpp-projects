#include<stdio.h>
#include<stdlib.h>

int main(void){

 int var;
 int *varadd;

 printf("enter a value : ");
 scanf("%d",&var);
 printf("%d \n",var);

 varadd  = &var;
 *varadd  = 41;
 printf("%d \n",var);
 printf("%d",*varadd);


return 0;
}
