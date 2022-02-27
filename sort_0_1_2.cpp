#include <iostream>
using namespace std;

void printArray(int arr[], int len) {
	for( int i=0; i<len; i++ ) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void sortArray(int arr[], int len) {
	int count[3] = {0};
	for ( int i=0; i<len; i++ ) {
		switch( arr[i] ) {
			case 0:
				count[0] += 1;
				break;
			case 1:
				count[1] += 1;
				break;
			
			case 2 :
				count[2] += 1;
				break;
		}
	}
	
	for ( int i=0; i<len; i++ ) {
		if( i < count[0] ) {
			arr[i] = 0;
		}
		else if ( i < count[0] + count[1] ){
			arr[i] = 1;
		}
		else {
			arr[i] = 2;
		}
	}
}

void sortArray1( int arr[], int n ) {
	for (int i=0; i< n-1; i++) {
		for ( int j=0; j< n-1-i; j++ ) {
			if ( arr[j] > arr[j+1] ) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void sortArray2( int a[], int n ) {
	int nz=0, nt=n-1, i=0;
	
	while( nt >= i ) {
		if( a[i] == 0 ) {
			int temp = a[i];
			a[i] = a[nz];
			a[nz] = temp;
			nz++;
			if ( a[i] == 2 ) {
				i--;
			}
		}
		if( a[i] == 2 ) {
			int temp = a[i];
			a[i] = a[nt];
			a[nt] = temp;
			nt--;
			if ( a[i] == 0 ) {
				i--;
			}
		}
		i++;
	}
}

int main() {
	int testCases;
	cin >> testCases;
	
	for ( int i=0; i<testCases; i++ ) {
		int n;
		cin >> n;
		
		int arr[n];
		for ( int j=0; j<n; j++ ) {
			cin >> arr[j];
		}
		
//		sortArray(arr, n);	
//		sortArray1(arr, n);
		sortArray2(arr, n);
		printArray(arr, n);
	}
}
