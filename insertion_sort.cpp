#include <iostream>
using namespace std;

void insertionSort( int arr[], int len ) {
//	for ( int i=1; i<len; i++ ) {
//		int temp = arr[i];
//		for ( int j=i-1; i >= -1; j-- ) {
//			if ( j == -1 ) {
//				arr[j+1] = temp;
//			}
//			else {
//				if (temp < arr[j]) {
//					arr[j+1] = arr[j];
//				}
//				else {
//					arr[j+1] = temp;
//					break;
//				}
//			}
//		}
//	}

	for ( int i=1; i<len; i++ ) {
		int temp = arr[i], j;
		for ( j=i-1; i >= -1; j-- ) {
			if (temp < arr[j]) {
				arr[j+1] = arr[j];
			}
			else {
				break;
			}
		}
		arr[j+1] = temp;
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
		int len;
		cin >> len;
		int arr[len];
		for ( int j=0; j<len; j++ )	{
			cin >> arr[j];
		}
		
		insertionSort( arr, len );
		printArray( arr, len );
	}
}
