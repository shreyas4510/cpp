#include <iostream>
using namespace std;

void fillArray( int arr[][100], int row, int col ) {
	for( int i=0; i<row; i++ ) {
		for ( int j=0; j<col; j++ ) {
			cin >> arr[i][j];
		}
	}
}

void printWave( int arr[][100], int row, int col ) {
	for( int i=0; i<col; i++ ){
		if( i%2 == 0 ) {
			for( int j=0; j<row; j++ ) {
				cout << arr[j][i] << " ";
			}	
		}
		else {
			for( int j=row-1; j>=0; j-- ) {
				cout << arr[j][i] << " ";
			}
		}
	}
}

int main() {
	int test_case;
	cin >> test_case;
	
	for ( int i=0; i<test_case; i++ ) {
		int row, col, arr[100][100];
		cin >> row >> col;
		
		// Take input
		fillArray(arr, row, col);
		
		// Print Array
		printWave(arr, row, col);
	}
}
