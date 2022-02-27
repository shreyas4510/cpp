#include <iostream>
using namespace std;

int main() {
	int arr[100][100];
	for ( int i=0; i<3; i++ ) {
		for ( int j=0; j<3; j++ ) {
			cin >> arr[i][j];
		}
	}
	
	cout << "Row wise : " << endl;
	for ( int i=0; i<3; i++ ) {
		for ( int j=0; j<3; j++ ) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	
	cout << "Column wise : " << endl;
	for ( int i=0; i<3; i++ ) {
		for ( int j=0; j<3; j++ ) {
			cout << arr[j][i] << ' ';
		}
		cout << endl;
	}
}
