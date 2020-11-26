//============================================================================
// Name        : testtest.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int i, j, factor;

	for (i = 1; i < 1000000; i++) {
		factor = 0;
		for (j = 1; j < i; j++) {
			if (i % j == 0) {
				factor += j;
			}
		}
		if (factor == i) {
			cout << i;
			cout << "\n";
		}
	}
}
