//============================================================================
// Name        : math_lab_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	std::cout.precision(19);
	long double x = 0, sum = 1, term = 1, temp = 0;
	long double  i = 0,Rn=0,j=1,a=0,k=0,c=0;

	cout << "Enter the value of x \n";
	cin >> x;
	cout << "Enter the value of a between 0 and x \n";
	cin >> a;


   	 long double exact_val = exp(x);
   	c = exp((double)a);
   	Rn = c*(x-a)/j;
	 while (temp != sum) {
		 i++;
		 term = term * (x-a)/i;
		 temp = sum;
		 sum = sum + term;
		 j = i+1;
		 Rn = (Rn *(x - a))/j;
		 k = c * sum;
	 cout << " \n term is   "<< i;
	 cout<<" \n current value is   "<< term ;
	 cout<<" \n Rn is   " << Rn;
	 cout<<" \n sum is   "<< k <<"\n";
	 //cout<<"\n"<<i<<" "<<term<<" "<<sum<<" ";
	 //cout<<"\n"<<exact_val-sum;
	 }
	 cout<<"exact val "<<exact_val;
	return 0;
}
