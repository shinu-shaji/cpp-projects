//============================================================================
// Name        : linked.cpp
// Author      : shinu & stebin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
//create structure
struct node{
int data;
struct node* next;
};

//print data
void print(node *a){
	cout<<"print linked list \n";
	while(a!=NULL){

		cout<<"data : ";
		cout<<a->data<<" @ ";
		cout<<a<<"\n";
		a = a->next;

	}
}

int main() {
	//make pointer variables
	node *head =NULL;
	node *second =NULL;
	node *third = NULL;
	node *fourth = NULL;
	node *fifth =NULL;

	//allocate memory
	head = new node;
	second = new node;
	third = new node;
	fourth= new node;
	fifth= new node;

	//initialize variables
	head->data = 2;
	head->next = second;

	second->data = 5;
	second->next = third;

	third->data = 13;
	third->next = fourth;

	fourth->data = 15;
	fourth->next = fifth;

	fifth->data = 19;
	fifth->next =NULL;
	//call print function
	print(head);


	return 0;
}
