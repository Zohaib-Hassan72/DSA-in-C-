#include <iostream>
using namespace std; 
struct Stack{
	
	int data;
	Stack * next;
};
Stack* top = NULL;

void Push( int n){
	Stack* NewNode = new Stack();
	
	if ( NewNode == 0){
		cout <<  "Stack overflow";
	}
	else{
		
		NewNode -> data = n;
		NewNode -> next = top ;
		top = NewNode;
	}
}

int Pop( ){
	if ( top == NULL){
		cout << " Stack underflow";
		
	}
	else{
		Stack* temp = top;
		int n = top -> data;
		top = top -> next;
		delete(temp);
		return n;
		
		
	}
}
void Display(){
	Stack* temp; 
	temp = top;
	while ( temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}
int main(){
	Push(5);
	Push(8);
	Push(66);
	
	// stack by dynaimc aaray 
 	cout << "Stack elements: ";
    Display();

    cout << "Popped: " << Pop() << endl;

    cout << "After Pop: ";
    Display();

    return 0;
}
