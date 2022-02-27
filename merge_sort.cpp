#include <iostream>
using namespace std;

int main() {
	
	int testCases;
	cin >> testCases;
	
	for ( int n=0; n<testCases; n++ ) {
			int len1, len2;
			cin >> len1;
			cin >> len2;
			
			int arr1[len1], arr2[len2], index=0, i=0, j=0, finalArr[len1 + len2];
			
			for ( int k=0; k<len1; k++ ) {
				cin >> arr1[k];
			}
			
			for ( int k=0; k<len2; k++ ) {
				cin >> arr2[k];
			}
			
			while ( index < ( len1 + len2 ) ) {
				if ( i > ( len1 - 1 ) || j > ( len2 - 1 ) ) {
					if ( i > len1 - 1 ) {
						finalArr[index] = arr2[j];
						j++;
					}
					else {
						finalArr[index] = arr1[i];
						i++;
					}
				}
				else {
					if( arr1[i] < arr2[j] ) {
						finalArr[index] = arr1[i];
						i++;
					}
					else {
						finalArr[index] = arr2[j];
						j++;
					}
				}
				index++;
			}
			
			for( int m=0; m<(len1 + len2); m++ ) {
				cout << finalArr[m] << " ";
			}	
	}	
}
