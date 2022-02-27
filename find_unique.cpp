#include <iostream>
using namespace std;

bool findUnique( int arr[], int n, int v, int position ) {
	for ( int i=0; i<n; i++ ) {
		if( i != position && arr[i] == v )
			return false;
	}
	return true;
}

int main() {
	int testCases;
	cin >> testCases;
	
	for ( int i=0; i < testCases; i++ ) {
		int n;
		cin >> n;
		
		int arr[n];
		for( int j=0; j<n; j++ ) {
			cin >> arr[j];
		}
		
		for ( int k=0; k<n; k++ ){
			if(findUnique(arr, n, arr[k], k)) {
				cout << arr[k];
				break;
			}
 		}
	}
}
