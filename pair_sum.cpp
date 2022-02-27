#include <iostream>
using namespace std;

int getPairCount( int arr[], int len, int target ) {
	int count = 0;
	for( int i=0; i<len; i++ ) {
		for ( int j=i+1; j<len; j++ ) {
			if((arr[i] + arr[j]) == target ) {
				count++;
			}
		}
	}
	return count;
}

int main() {
	int testCases;
	cin >> testCases;
	
	for ( int i=0; i<testCases; i++ ) {
		int len;
		cin >> len;
		
		int arr[len];
		int target;
		for ( int j=0; j<len; j++ ) {
			cin >> arr[j];
		}		
		cin >> target;
		cout << getPairCount(arr, len, target);

	}
}
