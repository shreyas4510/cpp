#include <iostream>
using namespace std;

void printArray( int arr[], int len ) {
	for ( int i=0; i<len; i++ ) {
		cout << arr[i] << " ";
	}
	cout<<endl;
}

// Approach 1
void rotateArray( int arr[], int len, int rn ) {
	for( int i=0; i<rn; i++ ) {
		int temp = arr[0];
		for ( int j=1; j<len; j++ ) {
			arr[j-1] = arr[j];
		}
		arr[len-1] = temp;
	}
}

// Approach 2
void rotateArray1( int arr[], int len, int rn ) {
	int temp_arr[rn];
	for ( int i=0; i<rn; i++ ) {
		temp_arr[i] = arr[i];
	}
	
	for ( int i=0; i<len-rn; i++ ) {
		arr[i] = arr[i+rn];
	}
	
	for( int i=0; i<rn; i++ ) {
		arr[ len - rn + i ] = temp_arr[i];
	}
}

// Approach 3
void rotateArray2( int arr[], int len, int rn ) {
	for( int i=0; i<len/2; i++ ) {
		int temp = arr[i];
		arr[i] = arr[ len - 1 -i ];
		arr[ len - 1 -i ] = temp;
	}
	
	for ( int i=0; i<(len-rn)/2; i++ ) {
		int temp = arr[i];
		arr[i] = arr[ len - rn - 1 -i ];
		arr[ len - rn - 1 -i ] = temp;
	}
	
	for ( int i=len-rn; i<( len - rn + ( rn / 2 )); i++ ) {
 		int temp = arr[i];
		arr[i] = arr[len - 1 - ( i - len + rn )];
		arr[len - 1 - ( i - len + rn )] = temp;
	}
}

int main() {
	int testCases;
	cin >> testCases;
	
	for ( int i=0; i<testCases; i++ ) {
		int n, rotateSpace;
		cin >> n;
		
		int arr[n];
		for ( int j=0; j<n; j++ ) {
			cin >> arr[j];
		}
		
		cin >> rotateSpace;
//		rotateArray(arr, n, rotateSpace);
//		rotateArray1(arr, n, rotateSpace);
		rotateArray2(arr, n, rotateSpace);
		printArray(arr, n);
	}
	
}
