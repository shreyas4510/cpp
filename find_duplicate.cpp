#include <iostream>
using namespace std;

bool findDuplicate(int arr[], int len, int target, int index) {
	for( int i = index+1; i < len; i++ ) {
		if( target == arr[i] ) {
			return true;
		}
	}
	return false;
}

int main() {
	int testCases;
	cin >> testCases;
	
	for ( int i=0; i<testCases; i++ ) {
		int len;
		cin >> len;
		int arr[100];
		
		for ( int j=0; j<len; j++ ) {
			cin >> arr[j];
		}
		
		for ( int k=0; k<len; k++ ) {
			if( findDuplicate(arr, len, arr[k], k) ) {
				cout << arr[k];
				break;
			}
		}
	}
}
