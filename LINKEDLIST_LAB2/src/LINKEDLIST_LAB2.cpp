//============================================================================
// Name        : LINKEDLIST_LAB2.cpp
// Author      : shinu & stebin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
};

class linkedlist{
	private:
		node *head,*tail;
	public:
		linkedlist(){
			head =NULL;
			tail = NULL;
		}

		void display_link(){
			int n =0;
			//cout<<"-----------------"<<endl;
			node *tmp = head;
			//cout<<head->data<<"test 2"<<endl;
			while(tmp != NULL){
				cout<<"["<<tmp->data<<","<<n<<"]->";
				tmp = tmp->next;
				n++;
			}
			cout<<"NULL"<<endl;
			delete tmp;
		}

		void insert_link(int data){
			node *temp = new node;
			temp->data = data;
			temp->next = NULL;
			//cout<<temp->data<<"test 1"<<endl;
			if(head == NULL){
				head = temp;
				tail = temp;
				//cout<<head->data<<"test 1"<<endl;
			}
			else{

				tail->next = temp;
				tail = tail->next;
			}
			//cout<<head->data<<"test 3"<<endl;
		}
		void insert_link(int data,int pos){
			int n=0;
			node *temp1 = new node;

			temp1->data = data;
			if(head == NULL){
				insert_link(data);
					}
			else{
				node *temp2 = new node;
				temp2 = head;
				while(temp2!=NULL)
				{
					if(pos==0){
						temp1->next = head;
						head = temp1;
						break;
					}
					else if(n == pos-1 && temp2->next !=NULL){
						temp1->next = temp2->next;
						temp2->next = temp1;
						break;
						}
					else if(temp2->next ==NULL){
						insert_link(data);
						break;
					}
					n++;
					temp2 = temp2->next;

					}
				}
		}
		void remove_link(int pos){
			int n=0;
			node *temp1 = new node;
			node *temp2 = new node;
			temp1 =head;
			while(temp1!=NULL){
				if(n==pos-1){
					temp2 = temp1->next;
					temp1->next = temp2->next;
					delete temp2;
					break;
				}
				temp1=temp1->next;
				n++;
			}

		}

};

int main() {
	linkedlist a;
	cout<<"insert link(at the end)"<<endl;
	a.insert_link(110);
	a.display_link();
	a.insert_link(109);
	a.display_link();
	a.insert_link(210);
	a.display_link();
	a.insert_link(330);
	a.display_link();
	cout<<"\ninsert \"200\" at the front"<<endl;
	a.insert_link(200,0);
	a.display_link();
	cout<<"\ninsert 999 at 2 th position"<<endl;
	a.insert_link(999,2);
	a.display_link();
	cout<<"\nremoving 2 th link"<<endl;
	a.remove_link(2);
	a.display_link();


	return 0;

}
