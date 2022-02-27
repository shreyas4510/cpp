#include<iostream>
using namespace std;

int main() {
	
	int rows, cols;
	cin >> rows >> cols;
	
	int** a = new int*[rows];
	
	for ( int i=0; i<rows; i++ ) {
		a[i] = new int[cols];
		for ( int j=0; j<cols; j++ ) {
			cin >> a[i][j];
		}
	}
	
	int rs=0, re=rows, cs=0, ce=cols;
	cout << endl;
	while( cs < ce ) {
		for ( int i=rs; i<ce; i++ ) {
			cout << a[rs][i] << " ";	
		}
		rs++;
		
		for ( int i=rs; i<re; i++ ) {
			cout << a[i][ce-1] << " ";	
		}
		ce--;
		
		for ( int i=ce-1; i>=cs; i-- ) {
			cout << a[re-1][i] << " ";
		}
		re--;
		
		for ( int i=re-1; i>=rs; i-- ) {
			cout << a[i][cs] << " ";
		}
		cs++;
	}
	
	for ( int i=0; i<rows; i++ ) {
		delete [] a[i];
	}
	
	delete [] a; 
	
}
