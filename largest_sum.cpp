#include <iostream>
#include <cstring>
using namespace std;

void calculateAllSums(int arr[][100], int row, int col) {
	char txt[10] = "row";
	int rowNum = 0, rowSum = INT_MIN;
	
	for ( int i=0; i<row; i++ ) {
		int temp = 0;
		for ( int j=0; j<col; j++ ) {
			temp += arr[i][j];
		}
		if( temp > rowSum ) {
			rowSum = temp;
			strcpy(txt, "row");
			rowNum = i;
		}
	}
	
	for ( int i=0; i<col; i++ ) {
		int temp = 0;
		for ( int j=0; j<row; j++ ) {
			temp += arr[j][i];
		}
		if( temp > rowSum ) {
			rowSum = temp;
			strcpy(txt, "column");
			rowNum = i;
		}
	}
	
	cout << txt << " " << rowNum << " " << rowSum;
	
}

void fillArray(int arr[][100], int row, int col) {
	for( int i=0; i<row; i++ ) {
		for( int j=0; j<col; j++ ) {
			cin >> arr[i][j];
		}
	}
}

int main() {
	int testCases;
	cin >> testCases;
	
	for ( int i=0; i<testCases; i++ ) {	
		int row, col, arr[100][100];
		cin >> row >> col;
		fillArray(arr, row, col);
		calculateAllSums(arr, row, col);
	}
}
