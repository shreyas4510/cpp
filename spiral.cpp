#include <iostream>
using namespace std;

void fill_array( int arr[][100], int row, int col ) {
	for ( int i=0; i<row; i++ ) {
		for ( int j=0; j<col; j++ ) {
			cin >> arr[i][j];
		}
	}
}

void print_array( int arr[][100], int row, int col ) {
	int count=0, rs=0, re=row-1, cs=0, ce=col-1;
	while ( count < (row*col) ){
		
		for( int i=cs; i <= ce; i++ ) {
			cout << arr[rs][i] << " ";
			count++;
		}
		rs++;
		
		for( int i=rs; i <= re; i++ ) {
			cout << arr[i][ce] << " ";
			count++;
		}
		ce--;
		
		for( int i=ce; i >= cs; i-- ) {
			cout << arr[re][i] << " ";
			count++;
		}
		re--;
		
		for( int i=re; i>=rs; i-- ) {
			cout << arr[i][cs] << " ";
			count++;
		}	
		cs++;
	}
}

int main() {
	int test_cases;
	cin >> test_cases;
	
	for ( int i=0; i<test_cases; i++ ) {
		int row, col, arr[100][100];
		cin >> row >> col;
		
		fill_array( arr, row, col );
		print_array( arr, row, col );
		cout << endl;
	}
}
