#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char str[100];
	cin >> str;
	
	int count=1, j=0;
	char current = str[0];
	
	for ( int i=1; i<=strlen(str); i++ ) {
		if( str[i] != current ) {
			str[j] = current;
			if( count > 1 ) {
				str[j+1] = count + '0';
				j++;
			}
			j++;
			if( str[i] == '\0' ) {
				str[j] = '\0';
			}
			current = str[i];
			count=0;
		}
		
		if( str[i] == current ) {
			count++;
		}
	}
	
	cout << str;
}
