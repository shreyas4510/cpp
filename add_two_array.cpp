#include <iostream>
using namespace std;

int addTwoArrays( int a1[], int l1, int a2[], int l2 ) {
	int first_num = 0, second_num = 0;
	
	for ( int i=0; i<l1; i++ ) {
		first_num = ( first_num * 10 ) + a1[i];
	}
	
	for ( int i=0; i<l2; i++ ) {
		second_num = ( second_num * 10 ) + a2[i];
	}
	
	return first_num + second_num;
	
}

void addTwoArrays1( int a1[], int l1, int a2[], int l2 ) {
	int flen = l1 > l2 ? l1+1 : l2+1, carry=0, place=0;
	int ans_arr[flen]={0};
	
	for( int i=0; i<flen; i++ ){
		int temp = ( l1-1-i >= 0 ? a1[ l1-1-i ] : 0 ) + ( l2-1-i >= 0 ? a2[l2-1-i] : 0 ) + carry;
		place = temp % 10;
		carry = temp / 10;
		ans_arr[flen - 1 - i] = place;
	}
	
	for ( int i=0; i<flen; i++ ) {
		cout << ans_arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	
	for(int i=0; i<n; i++){
		int len;
		cin >> len;
		
		int first_arr[len];
		for ( int j=0; j<len; j++ ) {
			cin >> first_arr[j];
		}
		
		int len1;
		cin >> len1;
		
		int second_arr[len1];
		for ( int k=0; k<len1; k++ ) {
			cin >> second_arr[k];
		}
		
//		cout << addTwoArrays(first_arr, len, second_arr, len1) << endl;
		addTwoArrays1( first_arr, len, second_arr, len1 );
	}
}
