#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int i = 0;
	while( i < n ) {
		int j = 0;
		while ( j < n + i ) { 
			if( j < n-i-1 ){
				cout << " ";	
			}
			else{
				cout << "*";	
			}
			j++;
		}
		cout << endl;
		i++;
	}
}
