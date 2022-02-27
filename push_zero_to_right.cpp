#include <iostream>
using namespace std;

// Insertion Sort
void sortArray( int arr[], int n ) {
	for ( int i=1; i<n; i++ ) {
		if( arr[i] == 0 ) {
			continue;
		}
		int current = arr[i];
		int j;
		for( j=i-1; j >= 0; j-- ) {
			if( arr[j] == 0 ) {
				arr[j+1] = arr[j];
			}
			else {
				break;
			}
		}
		arr[j+1] = current;
	}
}

// More efficient Way
void sortBySwapping( int arr[], int n ) {
	int k=0;
	for( int i=0; i<n; i++ ) {
		if( arr[k] != 0 ) {
			k++;
		}
		else if ( arr[k] == 0 && arr[i] != 0 ) {
			int temp = arr[i];
			arr[i] = arr[k];
			arr[k] = temp;
			k++;
		}
	}
}

void printArray( int arr[], int n ) {
	for ( int i=0; i<n; i++ ) {
		cout << arr[i] << " ";
	}
}

int main() {
	int testCases;
	cin >> testCases;
	
	for( int i=0; i<testCases; i++ ) {
		int len;
		cin >> len;
		
		int arr[len];
		for ( int j=0; j<len; j++ ) {
			cin >> arr[j];
		}
		
//		sortArray(arr, len);
		sortBySwapping(arr, len);
		printArray(arr, len);
	}
}
