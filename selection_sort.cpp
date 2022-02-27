#include <iostream>
using namespace std;

void selectionSort(int arr[], int len) {
	for ( int i=0; i<len-1; i++ ) {
		int min = arr[i], minIndex = i;
		for ( int j=i+1; j<len; j++ ) {
			if ( arr[j] < min ) {
				min = arr[j];
				minIndex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
}

void printArray(int arr[], int len) {
	for ( int i=0; i<len; i++ ) {
		cout << arr[i] << " ";
	}
}

int main () {
	int len;
	cin >> len;
	
	int arr[len];
	for ( int i=0; i<len; i++ ) {
		cin >> arr[i];
	}
	
	selectionSort(arr, len);
	printArray(arr, len);
	
}
