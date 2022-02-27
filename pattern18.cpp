#include <iostream>
using namespace std;

int main() {
	int i = 1, n;
	cin >> n;
	
	while ( i <= n ) {
		int j = 1, count = 1, flag = false;
		while ( j < n + i ) {
			if( j <= n - i )
				cout << " ";
			else {
				
				if( count == i ) {
					flag = true;
				}
				
				if( !flag ) {
					cout << count;
					count++;					
				}
				else {
					cout << count;
					count--;
				}
			}
			j++;
		}
		cout << endl;
		i++;
	}
}

//(  - 1 )
