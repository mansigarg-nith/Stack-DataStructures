// stack implementation as linked-list
#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};Node *top;
class Stack{
	public:
		int data;
		Stack(){
			top = NULL;
		}
		void isEmpty();
		void push(int d);
		void pop();
		void peek();
		void search(int d);
		void display();
};
void Stack::isEmpty(){
	if(top==NULL){
		cout<<"Stack is empty."<<endl;
		return;
	}
	cout<<"Stack is not empty."<<endl;
	return;
}
void Stack::push(int d){
	Node *n = new Node();
	n->data = d;
	n->next = top;
	top = n;
}
void Stack::pop(){
	Node *temp = top;
	top = temp->next;
	delete temp;
}
void Stack::peek(){
	if(top==NULL){
		cout<<"Stack is empty."<<endl;
		return;
	}
	cout<<"Top of the stack is: "<<top->data<<endl;;
}
void Stack::search(int d){
	Node *temp = top;
	if(temp->data == d){
		cout<<d<<" is found at the top of the stack."<<endl;
		return;
	}
	while(temp!=NULL){
		if(temp->data==d){
			cout<<d<<" is found!"<<endl;
			return;
		}temp = temp->next;
	}
	cout<<"Element not found!"<<endl;
}
void Stack::display(){
	if(top==NULL){
		cout<<"Stack is empty!"<<endl;
		return;
	}
	Node *temp = top;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp = temp->next;
	}
	return;
}
int main(){
	Stack s;
	cout<<"Stack implementation as linked-list."<<endl;
	cout<<"!-----------------------------------!"<<endl;
	int choice, d;
	while(1){
		cout<<"1. Check if stack is empty."<<endl;
		cout<<"2. Push."<<endl;
		cout<<"3. Pop."<<endl;
		cout<<"4. Print the top of the stack."<<endl;
		cout<<"5. Search for an element."<<endl;
		cout<<"6. Display the stack."<<endl;
		cout<<"7. Exit."<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice){
			case 1:
				s.isEmpty();
				break;
			case 2:
				cout<<"Enter the value to be pushed: ";
				cin>>d;
				s.push(d);
				break;
			case 3:
				s.pop();
				break;
			case 4:
				s.peek();
				break;
			case 5:
				cout<<"Enter the element to be searched: ";
				cin>>d;
				s.search(d);
				break;
			case 6:
				s.display();
				break;
			case 7:
				cout<<"EXIT"<<endl;
				exit(0);
				break;
		}
	}
}
