#include<iostream>
using namespace std;
int main(){

int aray[6] = {43,34,12,1,7,8};
int first_index = aray[0];
for ( int i = 1; i < 6 ; i++){
	if (first_index > i){
		first_index = i;
		
	}
}
cout << first_index;
	
}
