#include <iostream>
using namespace std;
int main(){
	// BUBBLE SORTING PROGRAM IN CPP
	int lst[5] = { 23 , 12 , 4 ,2 ,67};
	for ( int j = 0; j < 4 ; j++){

		for ( int i = 0 ; i < 4 ; i++){
			if ( lst[i] > lst[i+1]){
				int temp;
				temp = lst[i];
				lst[i]= lst[i+1];
				lst[i+1] = temp;
				
			}
		}
	}	
	for ( int i = 0 ; i < 5 ; i++){
		cout << lst[i] << " ";
		
	}	
	return 0;
}
