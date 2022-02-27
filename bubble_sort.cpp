#include <iostream>
using namespace std;

void sortArray( int arr[], int len ) {
	for( int i=0; i<len-1; i++ ) {
		for( int j=0; j<(len-1-i); j++ ) {
			if( arr[j] > arr[j+1] ) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void printArray( int arr[], int len ) {
	for( int i=0; i<len; i++ ) {
		cout << arr[i] << " ";
	}
}

int main() {
	int testCases;
	cin >> testCases;
	
	for ( int i=0; i<testCases; i++ ) {
		int size;
		cin >> size;
		
		int arr[size];
		for ( int i=0; i<size; i++ ) {
			cin >> arr[i];
		}
		
		sortArray(arr, size);
		printArray(arr, size);
	}
}
