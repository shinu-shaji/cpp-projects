//============================================================================
// Name        : math_lab_01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
	//============================================================================

#include <iostream>
using namespace std;

int main() {
	long double epsilon = 1,temp;
	while(epsilon+1>1){
		temp = epsilon;
		epsilon = epsilon/2;
	}
	cout<<temp;
	return 0;
}
