//============================================================================
// Name        : math_lab_04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int t = 5;
	float a[t]= {3,0,2,0,1};
	float b[t]= {0,0,1,0,-1};
	float c[t];
	float d[t];
	float mul_a=1;
	float mul_b=-2;
	int div_a = 1;
	int div_b = 1;
	for(int i=0;i<t;i++){
			a[i] = a[i]/div_a;
		}
	for(int i=0;i<t;i++){
			b[i] = b[i]/div_b;
		}
	for(int i=0;i<t;i++){
		a[i] = a[i]*mul_a;
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	for(int i =0;i<t;i++){
		    cout<<mul_b<<" ";
		    cout<<"\n";
			b[i] = b[i]*mul_b;
			cout<<b[i]<<" ";
		}

	for(int i =0;i<t;i++){
			c[i] = a[i]+b[i];

		}

	for(int i =0;i<t;i++){
				d[i] = b[i]+a[i];
			}
	cout<<"\n";
	for(int i =0;i<t;i++){
					cout<<c[i]<<" ";
				}
	cout<<"\n";
	for(int i =0;i<t;i++){
					cout<<d[i]<<" ";
				}


	return 0;
}
