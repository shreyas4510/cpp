#include <iostream>
using namespace std;

int main() {
	int n, i = 1;
	cin >> n;
	
	while( i <= n ) {
		int j = 1;
		while( j <= i ) {
			cout << j;
			j++;
		}
		cout << endl;
		i++;
	}
	
	i = 1;
	while( i <= n ) {
		int j = 1;
		int count = i;
		while( j <= i ) {
			cout << count;
			count++;
			j++;
		}
		cout << endl;
		i++;
	}
	
	i = 1;
	int count = 1;
	while( i <= n ) {
		int j = 1;
		while( j <= i ) {
			cout << count;
			count++;
			j++;
		}
		cout << endl;
		i++;
	}
	
}
