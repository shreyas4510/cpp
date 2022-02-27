#include<iostream>
using namespace std;

void reverseArray( int arr[], int len ) {
	for ( int i=0; i<(len/2); i++ ) {
		int temp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = temp;
	} 
}

void printArray( int arr[], int len ) {
	for ( int i=0; i<len; i++ ) {
		cout << arr[i] << " ";
	}
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	
	for ( int i=0; i < n; i++ ) {
		cin >> arr[i];
	}
	
	reverseArray(arr, n);
	printArray(arr, n);
}
