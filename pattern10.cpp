#include <iostream>
using namespace std;

int main(){
	int n, i=0;
	cin >> n;
	
	while( i < n ) {
		int j = 0;
		while( j < n ) {
			char a = 65 + j;
			cout << a;
			j++;
		}
		cout << endl;
		i++;
	}
	
	i=0;
	cout << endl;
	while( i < n ) {
		int j = 0;
		char a = 65 + i;
		while( j < n ) {
			char b = a + j;
			cout << b;
			j++;
		}
		cout << endl;
		i++;
	}
}
