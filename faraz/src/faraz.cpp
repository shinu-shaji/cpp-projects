#include<iostream>
#include<math.h>

/* Define function here */
#define f(x) sin(x)
using namespace std;
int main()
{
 float lower, upper, inte=0.0, StepSize, C,k;
 int a, SubInterval;

 /* Input */
 cout<<"Enter the lower limit of inte: ";
 cin>>lower;
 cout<<"Enter upper limit of inte: ";
 cin>>upper;
cout<<"Enter number of Subintervals: ";
 cin>>SubInterval;


 /* Calculation */

 /* Finding step size */
 StepSize = (upper - lower)/SubInterval;

 /* Finding Integration Value */
 inte = f(lower) + f(upper);

 for(a=1; a<= SubInterval-1; a++)
 {
  k = lower + a*StepSize;
  inte = inte + 2 * (f(C));
 }

 inte = inte * StepSize/2;

 cout<< endl<<"Required value of integration is: "<< inte;
return 0;
}
