//============================================================================
// Name        : parking.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <ctime>
using namespace std;


class automobile //automobile class
{	public:
	string license_no=""; //license no
	};

class car : automobile  // car class inheriting from automobile class
{	public:
	string brand;
	int start_time = 0;
	void park(string s,int s_t,string lic){ //park function
		license_no = lic;
		brand = s;
		start_time = s_t;
	}
	void display(){  //display function it displays some parameters of the parked vehicle
		cout<<"car"<<endl;
		cout<<"the license plate no is    : "<<license_no<<endl;
		cout<<"your brand is              : "<<brand<<endl;
	}
	void pay(int end_time){  //pay function
		int unit_p = 1;
		cout<<"car"<<endl;
		cout<<"the license plate no is    : "<<license_no<<endl;
		cout<<"your brand is              : "<<brand<<endl;
		cout<<"you have parked here for   : "<<end_time-start_time<<" seconds"<<endl;
		cout<<"you have to pay            : "<<unit_p*(end_time-start_time)<<" dollars"<<endl;
		}
	};

class truck : automobile  // truck class
{	public:
	int load;
	int start_time = 0;
	void park(int l,int s_t,string lic){ //park function
		license_no = lic;
		load = l;
		start_time = s_t;
	}
	void display(){ //display some parameters of the truck
		cout<<"truck"<<endl;
		cout<<"the license plate no is    : "<<license_no<<endl;
		cout<<"your vehicle capability is : "<<load<<" tons"<<endl;
	}
	void pay(int end_time){ // pay function takes in the end time
		int unit_p = 3;
		cout<<"truck"<<endl;
		cout<<"the license plate no is    : "<<license_no<<endl;
		cout<<"your vehicle capability is : "<<load<<" tons"<<endl;
		cout<<"you have parked here for   : "<<end_time-start_time<<" seconds"<<endl;
		cout<<"you have to pay            : "<<unit_p*(end_time-start_time)<<" dollars"<<endl;
		}
	};

class bus : automobile //bus class
{	public:
	int seats;
	int start_time = 0;
	int id;

	void park(int s,int s_t,string lic){ // park function
		license_no = lic;
		seats = s;
		start_time = s_t;
	}
	void display(){ // display function
		cout<<"bus"<<endl;
		cout<<"the license plate no is    : "<<license_no<<endl;
		cout<<"your seating capability is : "<<seats<<" seats"<<endl;
	}
	void pay(int end_time){ //pay function
		int unit_p = 2;
		cout<<"bus"<<endl;
		cout<<"the license plate no is    : "<<license_no<<endl;
		cout<<"your seating capability is : "<<seats<<" seats"<<endl;
		cout<<"you have parked here for   : "<<end_time-start_time<<" second"<<endl;
		cout<<"you have to pay            : "<<unit_p*(end_time-start_time)<<" dollars"<<endl;
		}
	};
struct park_spot{  // define  a parking spot using structure of objects of car bus and truck
	int fill=0; //this determine if the park spot is empty or not
	string v_type; // type of the vehicle parked
	car car_obj;
	bus bus_obj;
	truck truck_obj;
};
const int t_space=4; // total 4 parking spot
park_spot park[t_space]; //array of structure
void display(int i){ // display function
	if(park[i].fill>0){
			cout<<"\nat position --  "<<i<<endl;
			if(park[i].v_type=="bus"){park[i].bus_obj.display();}
			else if(park[i].v_type=="car"){park[i].car_obj.display();}
			else if(park[i].v_type=="truck"){park[i].truck_obj.display();}
	}
	else if(park[i].fill==0){
		cout<<"\n"<<"at position -- "<<i<<"\nslot is empty\n";
	}
}
void pay(int i,int time){ // pay function
	if(park[i].fill>0){
				//cout<<"\nat position --  "<<i<<endl;
				if(park[i].v_type=="bus"){park[i].bus_obj.pay(time);}
				else if(park[i].v_type=="car"){park[i].car_obj.pay(time);}
				else if(park[i].v_type=="truck"){park[i].truck_obj.pay(time);}
		}
}
int main() {
	time_t current_time;
	int n,type;
	int t_space=4;
	string lis,brand;
	int load,seats,s_time,e_time;
	int free_sp,id;
	while(1){
		//what do you want to park
		loca:
		cout<<"-------------------------------------"<<endl;
		cout<<"\nto park type    : 1\n";
		cout<<"to display type : 2\n";
		cout<<"to pay type     : 3\n";
		cout<<"enter : ";
		cin>>n;
		switch(n){
		case 1:
			cout<<"-------------------------------------"<<endl;
			for(int i=0;i<t_space;i++){ // check for free space
				if(park[i].fill<1){
				free_sp = i;
				break;
				}
				else if(i==t_space-1){cout<<"\nall spaces are occupied\n\n"<<endl;
						goto loca;}
				}
			cout<<"for truck(3 dollar/second) type   1\n";
			cout<<"for bus  (2 dollar/second) type   2\n";
			cout<<"for car  (1 dollar/second) type   3"<<endl;
			cout<<"enter your choice: ";
			cin>>type;
			switch(type){
			case 1:
				cout<<"-------------------------------------"<<endl;
				cout<<"\nenter the license no : ";
				cin.ignore();
				getline(cin,lis);
				cout<<"enter the max load   : ";
				cin>>load;
				time(&current_time); // load the current time
				//cout<<"enter the start time : ";
				//cin>>s_time;
				park[free_sp].fill=1;
				park[free_sp].v_type="truck";
				park[free_sp].truck_obj.park(load,int(current_time),lis); //pass all detailss to truck object
				break;
			case 2:
				cout<<"-------------------------------------"<<endl;
				cout<<"\n\nenter the license no  : ";
				cin.ignore();
				getline(cin,lis);
				cout<<"enter the max seating : ";
				cin>>seats;
				time(&current_time);
				//cout<<"enter the start time  : ";
				//cin>>s_time;
				park[free_sp].fill=1;
				park[free_sp].v_type="bus";
				park[free_sp].bus_obj.park(seats,int(current_time),lis); // pass all details to bus object
				break;
			case 3:
				cout<<"-------------------------------------"<<endl;
				cout<<"\n\nenter the license no : ";
				cin.ignore();
				getline(cin,lis);
				cout<<"enter the brand : ";
				getline(cin,brand);
				time(&current_time);
				//cout<<"enter the start time";
				//cin>>s_time;
				park[free_sp].fill=1;
				park[free_sp].v_type="car";
				park[free_sp].car_obj.park(brand,int(current_time),lis); // pass all details to car object
				break;
			}
			break;
		case 2:
			cout<<"-------------------------------------"<<endl;
			for(int i=0;i<t_space;i++){
				display(i);
			}
			break;
		case 3:
			cout<<"-------------------------------------"<<endl;
			cout<<"which slot do you want to pay for"<<endl;
			cin>>id;
			if(park[id].fill==0){cout<<"sorry the slot is empty"<<endl;break;} // check if the entered slot is empty
			//display(id);
			//cout<<"enter the end time"<<endl;
			//cin>>e_time;
			time(&current_time);
			pay(id,int(current_time));
			park[id].fill=0;
			break;

			}
	}
	return 0;
}
