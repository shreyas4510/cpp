#include <iostream>
using namespace std;

// First Approach
int findSecondLargest( int a[], int len ) {
	for ( int i=0; i<len-1; i++ ) {
		for ( int j=0; j<len-1-i; j++ ) {
			if( a[j] < a[j+1]) {
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	return a[1];
}

int findSecondLargest1(int arr[], int len) {
	int a[2] = { arr[0], INT_MIN };
	
	for ( int i=0; i<len; i++ ) {
		if( a[0] < arr[i] ) {
			a[1] = a[0];
			a[0] = arr[i];
		}
		else if ( a[0] > arr[i] && a[1] < arr[i] ) {
			a[1] = arr[i];
		}
	}
	
	return a[1];
}

int main() {
	int testCases;
	cin >> testCases;
	
	for ( int i=0; i<testCases; i++ ) {
		int len;
		cin >> len;
		
		int arr[len];
		for ( int j=0; j<len; j++ ) {
			cin >> arr[j];
		}
		
//		cout << findSecondLargest(arr, len);
		cout << findSecondLargest1(arr, len);
	}
}
