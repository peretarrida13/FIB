#include <iostream>
using namespace std; 

int main(){
	int x; 
	cin >> x; 
	for(int i = 1; i <= x; ++i){
		for (int j = 1; j <= x; ++j){
			if(j % 2 == 0){
				if(i % 2 == 0){
					cout << "*";
				}
				else{
					cout << ".";
				}
			}
			else{
				if(i % 2 == 0){
					cout << "*";
				}
				else{
					cout << ".";
				}
			}
		}
		cout << endl;		
	}
}