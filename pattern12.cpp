#include <iostream>
using namespace std;

int main() {
	int i = 0, n;
	cin >> n;
	char ch = 'A';
	
	while ( i < n )	{
		int j = 0;
		char temp = ch + i;
		while ( j <= i ) {
			cout << temp;
			j++;
			temp = temp + 1;
		}
		i++;
		cout << endl;
	}
}
