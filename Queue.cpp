 // QUeue
 #include<iostream>
 using namespace std;
 struct Queue{
 	int data;
 	Queue* next;
 };
 Queue* rear = NULL;
 Queue* front = NULL;
 void Enqueue(int v){
 	Queue* NewNode = new Queue();
 	if ( NewNode == NULL){
 		cout << "queue is full";
	 }
	NewNode -> data = v;
 	NewNode -> next = NULL;
	if ( front == NULL){
		front = rear = NewNode;
	}
	else{
	
		rear -> next = NewNode; 
		rear = NewNode; 
	}
}
void Dequeue(){
	Queue* temp;
	temp = front;
	front = front -> next;
	delete(temp);
	
	
	}

 
 
 void Display(){
 	Queue* temp;
 	temp = front;
 	while ( temp != NULL){
 		cout << temp -> data << " ";
 		temp = temp -> next;
	 }
	 cout << endl;
 }
 int main(){
 	  Enqueue(5);
    Enqueue(15);
    Enqueue(25);
	Dequeue();
    cout << "Queue elements: ";
    Display();
 	return 0;
 }
