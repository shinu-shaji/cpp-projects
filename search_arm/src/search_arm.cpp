//============================================================================
// Name        : binary.cpp
// Author      : shinu & stebin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int main() {
	int size_arr=0;
/*
	size_arr = 7;
	int a[size_arr] ={3,1,6,11,35,10,8};
*/

	cout<<"enter the size of array : ";
	cin>>size_arr;
	int a[size_arr];
	//get array variables
	for(int i =0;i<size_arr;i++)
	{
			cout<<"enter the array variable "<<i<<" : ";
			cin>>a[i];
	}

	//array sorting
	for(int i =0;i<size_arr;i++){
		int temp;
		for(int j =i;j<size_arr;j++){
			if(a[i]>a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}

		}
	}
	//print sorted array
	cout<<"\n------------\n";
	cout<<"sorted array"<<endl;
	for(int i=0;i<size_arr;i++){
		cout<<"a["<<i<<"] : ";
		cout<<a[i]<<endl;
	}

	//linear search

	cout<<"enter the number you want to search for : ";
	int srh_arr;
	cin>>srh_arr;
	cout<<"------------\n";
	cout<<"linear search"<<endl;
	int found=0;
	for(int i=0;i<size_arr;i++){
		if(srh_arr ==a[i]){
			found = i;
			break;
		}
		else{found =-1;}
		}
	if(found <0){
			cout<<srh_arr<<" not found  "<<endl;
		}
	else if(found >=0){
			cout<<"found"<<endl;
			cout<<"a["<<found<<"] : ";
			cout<<a[found]<<endl;
		}

	//binary search
	cout<<"\n------------\n";
	cout<<"binary search\n";
	found =0;
	int i = (size_arr/2);

	while(i>=0 && i<size_arr){

		if(a[i]==srh_arr){
			found =1;
			break;
		}
		else if(a[i]>srh_arr){
			i--;
		}
		else{
			i++;
		}
	}

	if(found == 0){
		cout<<srh_arr<<" not found"<<endl;
	}
	else if(found ==1){
		cout<<"\nfound"<<endl;
		cout<<"a["<<i<<"] : ";
		cout<<a[i]<<endl;
	}
	return 0;
}
