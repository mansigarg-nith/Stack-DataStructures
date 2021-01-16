//create stack as array
#define MAX 100
#include <iostream>
using namespace std;
class Stack{
	int top;
	public:
		int array[MAX];
		Stack(){
			top = -1;
		}
		void push(int x);
		void pop();
		void isEmpty();
		void isFull();
		void peek();
		int search(int x);
};
void Stack:: isEmpty(){
	if(top==-1){
		cout<<"Stack is empty."<<endl;
	}else{
		cout<<"Stack is not empty."<<endl;
	}
	if(top==MAX-1){
		cout<<"Stack is full."<<endl;
	}
}
void Stack:: peek(){
	if(top==-1){
		cout<<"Top of the stack is NULL as stack is empty."<<endl;
	}else{
		int x = array[top];
		cout<<x<<" is the top of the stack."<<endl;
	}
}
void Stack::push(int x){
	if(top<MAX-1){
		array[++top] = x;
		cout<<x<<" is pushed in the stack."<<endl;
	}else{
		cout<<"OVERFLOW!";
	}
}
void Stack:: pop(){
	if(top==-1){
		cout<<"UNDERFLOW!"<<endl;
	}else{
		int d = array[top--];
		cout<<d<<" is popped out of stack."<<endl;
	}
}
int main(){
	Stack s;
	cout<<"Stack of maximum size 100 is implemented as array."<<endl;
	int choice, value;
	while(1){
		int temp;
		cout<<"Enter your choice"<<endl;
		cout<<"1. Push operation"<<endl;
		cout<<"2. Pop operation"<<endl;
		cout<<"3. Print the top of the stack"<<endl;
		cout<<"4. Check if stack is empty or full"<<endl;
		cout<<"5. Search for an element in the stack."<<endl;
		cout<<"6. Exit"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter the value to be pushed: ";
				cin>>value;
				s.push(value);
				break;
			case 2:
				s.pop();
				break;
			case 3:
				s.peek();
				break;
			case 4:
				s.isEmpty();
				break;
			case 5:
				cout<<"Enter the value to be searched: ";
				cin>>value;
				temp = s.search(value);
				if(temp==-1){
					cout<<"Element not found!"<<endl;
				}else{
					cout<<value<<" is found at index "<<temp<<endl;
				}
				break;
			case 6:
				cout<<"Exit"<<endl;
				exit(0);
		}
	}
}
