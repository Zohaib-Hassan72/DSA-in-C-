#include <iostream>
using namespace std;
struct Noda{
	int data;
	Noda* next;
};
Noda* head = NULL;

void insert(int value){
	Noda* NewNoda = new Noda();
	NewNoda -> data = value;
	NewNoda -> next = NULL;
	if (head == NULL){
		head = NewNoda;
		return;
	}
	Noda* curr = head;
	while ( curr -> next != NULL){
		curr = curr -> next;
	}
	curr -> next = NewNoda;	
	}
	
void Display (void){
	Noda* temp = head;
	while ( temp != NULL){
		
		
		cout << temp -> data << "->";
		temp = temp -> next;
	}
	cout << "NULL" << endl;
	
}	
void Delete(int value){
	Noda* temp = head;
	
	if ( value = head -> data){
			head = head -> next;
			free(temp);
			
		}
	}


	
int main(){
	int value , select;
	while (true){
	
		cout << "enter number 1 for insert , 2 for delete , 3 for display = "; 
		cin >> select;
		if ( select == 1){
			cout << "enter value to be add = ";
			cin >> value;
			insert(value);
		}
		else if ( select == 3){
			Display();
		}
		else if ( select == 2){
			cout << " enter no = ";
			cin >> value;
			Delete(value);
		}
		else{
			cout << " Invalid Input";
		}
	}
}

