#include <iostream>
using namespace std;

int main() {
	int row, col, arr[100][100];
	cin >> row >> col;
	
	for ( int i=0; i<row; i++ ) {
		for ( int j=0; j<col; j++ ){
			cin >> arr[i][j];
		}
	}
	
	for ( int i=0; i<col; i++ ) {
		int sum = 0;
		for ( int j=0; j<row; j++ ) {
			sum += arr[j][i];
		}
		cout << sum << " ";
	}
	
}
