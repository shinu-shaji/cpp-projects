//============================================================================
// Name        : math01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int size = 5;
	int arr_1[]={6,5,1,13,12,16};
	int temp=0,j;
	for(int i = 0 ;i<=size;i++){
		cout<<arr_1[i]<<"\n";

	}
	for(int i = 0 ;i<=size/2;i++){
			j = 4-i;
			temp = arr_1[i];
			arr_1[i] = arr_1[j];
			arr_1[j] = temp;
		}

	cout<<"Reverse"<<"\n";
	for(int i = 0 ;i<=size;i++){
			cout<<arr_1[i]<<"\n";
		}
	for(int i = 4 ;i>=0;i--){


					j = size;

					temp = arr_1[i];
					arr_1[i] = arr_1[j];
					arr_1[j] = temp;
			}

	cout<<"shifting"<<"\n";
		for(int i = 0 ;i<=size;i++){
				cout<<arr_1[i]<<"\n";
			}
	return 0;
}
