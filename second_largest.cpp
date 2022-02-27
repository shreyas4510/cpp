#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int min = INT_MIN, temp = INT_MIN, n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int newVar; 
		cin >> newVar;
		if( temp < newVar ) {
			if( i != 0 ) {
				min = temp;
			}
			temp = newVar;
		}
	}
	cout << min;
}
