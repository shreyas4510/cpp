#include <iostream>
using namespace std;

void sortArray(int arr[], int len) {
	for( int i=0; i<len; i++ ) {
		if( arr[i] == 0 )
			continue;
		for( int j=i+1; j<len; j++ ) {
			if ( arr[j] < arr[i] ) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				break;
			}
		}
	}
}

void printArr( int arr[], int len ) {
	for ( int i=0; i<len; i++ ) {
		cout << arr[i] << " ";
	}
}
 
int main() {
	int testCases;
	cin >> testCases;
	
	for ( int i=0; i<testCases; i++ ) {
		int len;
		cin >> len;
		int arr[len];
		for ( int i=0; i<len; i++ ) {
			cin >> arr[i];
		}
		sortArray(arr, len);
		printArr(arr, len);
	}
}
