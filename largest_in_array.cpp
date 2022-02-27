#include <iostream>
using namespace std;

int main() {
	int n, min = INT_MIN;
	cin >> n;
	int arr[n];
	for ( int i = 0; i < n; i++ ) {
		cin >> arr[i];
	}
	
	for ( int i = 0; i < n; i++ ) {
		if ( arr[i] > min ) {
			min = arr[i];
		}
	}
	
	cout << min << endl;
}
