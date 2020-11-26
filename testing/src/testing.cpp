#include <iostream>
using namespace std;

void call(int ch)
{
cout<<char(ch);
if (ch < 90)
call(ch+1);
}
void low(int l)
{
cout<<char(l);
if (l < 122)
low(l+1);
}
int main()
{
	//char   a;
	cout<<" Enter the numbaaer \n"<<endl;
	//cin >> a;
char a ='a';
cout<<int(a);
if( a >= 65  &&  a <= 90 )
{
	cout<<"\nUPPER CASE LETTERS"<<endl;

call(65);
}
else  if (a >= 97 && a <= 122)
{
	cout<<"\nLOWER CASE LETTERS"<<endl;


low(97);
}

return 0;
}
