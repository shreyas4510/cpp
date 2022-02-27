#include <iostream>
using namespace std;

int tripletPairs( int arr[], int len, int target ) {
	int count = 0;
	for( int i=0; i<len; i++) {
		for ( int j=i+1; j<len; j++ ) {
			for ( int k=j+1; k<len; k++ ) {
				if ((arr[i] + arr[j] + arr[k]) == target )
					count++;
			}
		}
	}
	return count;
}

int main() {
	int testCases;
	cin >> testCases;
	
	for( int i=0; i<testCases; i++ ) {
		int len, target;
		cin >> len;
		int arr[len];
		
		for ( int j=0; j<len; j++ ) {
			cin >> arr[j];
		}
		cin >> target;
		cout << tripletPairs( arr, len, target );
	}
	
}
