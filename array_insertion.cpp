#include<iostream>
using namespace std;

void print( int arr[], int target, int len ) {
	for( int i=0; i<len; i++ ) {
		if ( target == arr[i] ) {
			arr[i] = INT_MIN;
			cout << target << " ";
			break;
		}
	}
}

int main() {
	int testCases;
	cin >> testCases;
	
	for ( int i=0; i<testCases; i++ ) {
		int len1, len2;
	
		cin >> len1;
		int arr[len1];
		for ( int j=0; j<len1; j++ ) {
			cin >> arr[j];
		}
		
		cin >> len2;
		int arr1[len2];
		for ( int j=0; j<len2; j++ ) {
			cin >> arr1[j];
		}
		
		for ( int j=0; j < len1; j++ ) {
			print( arr1, arr[j], len2 );
		}
		
	}
}
