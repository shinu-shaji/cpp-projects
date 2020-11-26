//============================================================================
// Name        : math_lab_03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;



int main() {
	// size of the square matrix
	int t_n = 3;
	//coefficients of variables
	float matr[t_n][t_n]={{2,1,4},{1,2,3},{4,-1,2}};
	//constants
	float con_mat[t_n] = {1,1.5,2};

	float temp_arr[t_n];
	float cn,cm,con;
	for(int x=0;x<t_n;x++){
		for(int y=0;y<x;y++){
			cn = matr[x][y];
			cm = matr[y][y];
			con_mat[x] = con_mat[x]*cm;
			con = con_mat[y]*cn;
			con_mat[x] = con-con_mat[x];

			for(int yn=0;yn<t_n;yn++){
				matr[x][yn]= matr[x][yn]*cm;
				temp_arr[yn] = matr[y][yn]*cn;
			}
			for(int yn=0;yn<t_n;yn++){
							matr[x][yn] = temp_arr[yn]-matr[x][yn];
						}
			for(int x=0;x<t_n;x++){
						for(int y =0;y<t_n;y++){
							cout<<matr[x][y]<<" ";
						}
						cout<<"\n";
			}
			cout<<"constants";
			for(int x =0;x<t_n;x++){cout<<" "<<con_mat[x];}
			cout<<"\n-----\n";
		}
	}

float coff[t_n],cff=1;
for(int x = 0;x<t_n;x++){
	coff[x]=1;
}
for(int x = t_n-1;x>=0;x--){

	for(int i = x+1;i<t_n;i++){
		matr[x][i] = matr[x][i]*coff[i];
	}
	for(int y = x+1;y<t_n;y++){
		con_mat[x] = con_mat[x]-matr[x][y];
	}
	con_mat[x] = con_mat[x]/matr[x][x];
	coff[x] = con_mat[x];
}
for(int x = 0;x<t_n;x++){cout<<"\nx"<<x<<" : "<<con_mat[x];}
	return 0;
}
