#include <ctime>
#include <iostream>
using namespace std;
int main()
{
	int a;
	time_t current_time;
     // Stores time in current_time
	time(&current_time);
	cout << current_time << " seconds has passed since 00:00:00 GMT, Jan 1, 1970\n";
	a = int(current_time);
	cout<<a<<endl;
	return 0;
}
