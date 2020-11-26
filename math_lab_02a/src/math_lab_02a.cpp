#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
	std::cout.precision(19);
	long double x, sum = 1, term = 1, temp = 0 , Rn = 0, a;
	long double ab=0,i = 0,c = 0,j = 1, k = 0;

	cout << "Enter the value of x \n";
	cin >> x;
	cout << "Enter the value of a, 'a' should be between 0 and x \n";
	cin >> a;

	c = exp((double)a);

	Rn = c*(x-a)/j;
	while (Rn >= 0.00000000001)
		{
			i++;
			term = term * (x -a )/i;
			temp = sum;
			sum = sum + term;
			j = i+1;
			Rn = (Rn *(x - a))/j;
			k = c * sum;
			cout << " \n term is   "<< i <<" \n current value is   "<< term <<" \n Rn is   " << Rn   <<" \n sum is   "<< k <<"\n";
		}
	ab = exp((double)x);
	cout<<"exact value" << ab;
return 0;
}
