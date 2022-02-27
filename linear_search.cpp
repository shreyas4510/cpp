#include <iostream>
using namespace std;

int findIndex( int arr[], int len, int n ) {
	for ( int i=0; i < len; i++ ) {
		if ( arr[i] == n ) {
			return i;
		}
	}
	return -1;
}

int main() {
	int n;
	cin >> n;
	
	for ( int i=0; i < n; i++ ) {
		int len, num;
		cin >> len;
		int arr[len];
		
		for( int j=0; j<len; j++ ) {
			cin >> arr[j];
		}
		cin >> num;
		cout << findIndex( arr, len, num );
	}
	
}
