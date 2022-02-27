#include<iostream>
using namespace std;

printArray( int arr[], int len ) {
	for ( int i=0; i<len; i++ )
		cout << arr[i] << " ";
}

int main() {
	int n;
	cin >> n;
	
	for ( int i=0; i<n; i++ ) {
		int len;
		cin >> len;
		int incIndex = 0, decIndex = len-1;
		int arr[len];
		
		for ( int j=1; j<=len; j++ ) {
			if( j%2 != 0 ) {
				arr[incIndex] = j;
				incIndex++;
			}
			else {
				arr[decIndex] = j;
				decIndex--;
			}
		}
		
		printArray(arr, len);
	}
}
