/*
 ============================================================================
 Name        : dice.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*generate random number */

int dicerolling(){
	int n;
	n = (rand()%11)+2; //sum of 2 dice is n
	return n;
}
/*main function*/

int main(void) {

	int d_val;
	int win_val;
	FILE *out_file; //output file pointer
	out_file = fopen("output.txt","w"); // open output file
	if(out_file == NULL) // check file exist
	   {
	      printf("Error!");
	      exit(1);
	   }

	for(int i=0;i<20;i++){ // run for 20 players
		int ini = 0;
	d_val= dicerolling(); // call dice rolling function
	printf("dice value is :  %d \n",d_val);
	fprintf(out_file,"dice value is : %d \n",d_val);

	if(d_val==7||d_val==11){ // check in the dice sum
		ini=1;
		printf("player wins");
		fprintf(out_file,"player wins");
	}
	else if(d_val==2||d_val==3||d_val==12) // check the dice sum
	{
		ini =1;
		printf("player loose");
		fprintf(out_file,"player loose");
	}
	else { //check the dice sum to win
		win_val=d_val; // the initial points is required to win
		printf("To win : ");
		printf("dice value is : %d \n",d_val);
		fprintf(out_file," To win dice value is : %d \n",d_val); //out test print player wins
	}
	while(ini==0){

	d_val= dicerolling(); // call dice rolling
	printf("dice value is : %d \n",d_val);
	fprintf(out_file,"dice value is : %d \n",d_val);
	if(d_val==win_val){ // check if value is obtained
		printf("player wins");
		fprintf(out_file,"player wins");//out test print player wins
		break;
	}
	if(d_val==7){
		printf("player loose");//print player  loose
		fprintf(out_file,"player loose");//out test print player wins
		break;
	}
	}
	printf("\n\n------------------\n\n\n"); // print new line
	fprintf(out_file,"\n\n------------------\n\n\n");//print new line
	}
	fclose(out_file); //close file
	return EXIT_SUCCESS;
}
