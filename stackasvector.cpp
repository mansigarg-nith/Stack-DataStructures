// implementing stack as dynamic array
#include <iostream>
#include <vector>
using namespace std;
class Stack{
	int top;
	public:
		vector<int> v;
		Stack(){top = -1;}
		void isEmpty();
		int push(int d);
		void pop();
		void peek();
};
void Stack::isEmpty(){
	if(top==-1){
		cout<<"Stack is empty!"<<endl;
		return;
	}
	cout<<"Stack is not empty."<<endl;
}
int Stack::push(int d){
	top+=1;
	v.push_back(d);
	return top;
}
void Stack::pop(){
	if(top==-1){
		cout<<"You can't pop anything out as stack is empty."<<endl;
		return;
	}
	int d = v[top];
	top-=1;
	cout<<d<<" is popped out"<<endl;
}
void Stack::peek(){
	if(top==-1){
		cout<<"Stack is empty!"<<endl;
		return;
	}
	cout<<v[top]<<" is the top of the stack."<<endl;
}
int main(){
	Stack s;
	cout<<"Stack implementation as dynamic array."<<endl;
	cout<<"!-----------------------------------!"<<endl;
	int choice, d;
	while(1){
		cout<<"1. Check if stack is empty."<<endl;
		cout<<"2. Push."<<endl;
		cout<<"3. Pop."<<endl;
		cout<<"4. Print the top of the stack."<<endl;
		cout<<"5. Exit."<<endl;
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
				cout<<"EXIT"<<endl;
				exit(0);
				break;
		}
	}
}
