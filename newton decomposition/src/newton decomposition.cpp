//============================================================================
// Name        : newton.cpp
// Author      : shinu & stebin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;



int main() {
	int n_0 =5;
	double x =3;
	double x_i[n_0] = {-0, 1, -1, 2, -2};
	double f_x[n_0] = {-5, -3, -15, 39, -9};
	double f_o[n_0][n_0];
	cout<<"enter the row size: ";
	cin>>n_0;
	for(int i=0;i<n_0;i++){
		cout<<"enter the x values : ";
		cin>>x_i[i];
	}
	for(int i=0;i<n_0;i++){
		cout<<"enter the f(x) value : ";
		cin>>f_x[i];
	}
	cout<<"for which value x the f(x) need to be calculated : ";
	cin>>x;

	// find the derivatives
	int n=1;
	for(int i=0;i<n_0;i++){
		f_o[i][0] = f_x[i];
	}
	for(int i=n_0-1;i>=0;i--){
		for(int j=0;j<i;j++){
			//cout<<"\n"<<i<<"--i "<<j<<"--j "<<n<<"--n "<<" \n";
			//cout<<"f_o[j+1][n]-"<<f_o[j+1][n];
			f_o[j][n] = (f_o[j+1][n-1]-f_o[j][n-1])/(x_i[j+1+(n-1)]-x_i[j]);
			//cout<<f_o[j][n]<<" \n";

		}
		n++;
	}
	//cout<<"\n\n";
	n=0;
	for(int i =0;i<n_0;i++){
		cout<<"\n";
		for(int j=1;j<n_0-i;j++){
			cout<<f_o[i][j];
			cout<<" ";
		}
	}
	double res=0;
		double ans=1;
		for(int i=0;i<=n_0-1;i++){
			double b=f_o[0][i];
			for(int j=0;j<i;j++){
				ans=ans*(x-x_i[j]);
			}
			res = res+b*ans;
			ans = 1;
		}
		cout<<"\nresult-- "<<res<<endl;
}
