//============================================================================
// Name        : largest.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int main(){

   int n;
   int  largest_number;
   int number[50];
   cout<<"Enter total no of elements: ";
   cin>>n;
   for(int i = 0; i < n; i++) {
      cout<<"Enter Element ";
      cin>>number[i];
   }
   largest_number = number[0];
   for(int i = 1;i < n; i++) {

      if(largest_number < number[i])
         largest_number = number[i];
   }
   cout<<"Largest element in array is: "<<largest_number;
   return 0;
}

