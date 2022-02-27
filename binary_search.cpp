#include <iostream>
using namespace std;

int searchElement( int arr[], int len, int target ) {	
	int start = 0, end = len-1, mid;
	while( start <= end ) {
		mid = ( start + end )/2;
		
//		cout << "Start : " << start << "\t" << "End : " << end << "\t" << "Mid : " << mid;
		
		if ( arr[start] == target ) {
			return start;
		}
		
		if( arr[end] == target ) {
			return end;
		}
		
		if ( arr[mid] == target ) {
			return mid;
		}
		else if ( arr[mid] > target ) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return -1;
}

int main() {
	int len;
	cin >> len;
	
	int arr[len];
	for ( int i=0; i<len; i++ ) {
		cin >> arr[i];
	}
	
	int testCases;
	cin >> testCases;
	
	for ( int i=0; i<testCases; i++ ) {
		int target;
		cin >> target;
		
		cout << searchElement( arr, len, target );
	}
}
