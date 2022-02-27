#include <iostream>
using namespace std;

int checkRotation(int arr[], int len) {
	for ( int i=0; i<len-1; i++ ) {
		if ( arr[i] > arr[i+1] ) {
			return i+1;
		}
	}
	return 0;
}

int main() {
	int n;
	cin >> n;
	
	for ( int i=0; i<n; i++ ) {
		int len;
		cin >> len;
		
		int arr[len];
		for( int j=0; j<len; j++ ) {
			cin >> arr[j];
		}
		
		cout << checkRotation(arr, len);
	}
}
