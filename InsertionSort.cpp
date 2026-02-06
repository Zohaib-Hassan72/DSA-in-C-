#include <iostream>
using namespace std;
int main(){
	// program of  insertion sorting
	int lst[10]= { 23 , 87 , 65 , 43 , 80 , 2 , 26 , 70 , 9 , 46 };
	for ( int i = 1 ; i <= 10 ; i++){
		int j;
		int current = lst[i];
		
		for ( j = i-1 ; j >= 0 &&  lst[j] > current ; j--){
		lst[ j+1 ] = lst [j];
		
	}
		lst[j+1] = current;
}

	for (int i = 0 ; i<5 ; i++){
		cout << lst[i] << " ";
		
	}
}
