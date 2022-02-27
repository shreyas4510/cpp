#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[100];
	cin.getline(str, 100);
	
	int j=0;
	for( int i=0; i<=strlen(str); i++ ) {
		if( str[i] == ' ' || str[i] == '\0' ) {
			int k=i-1;
			while (j < k) {
				char temp = str[j];
				str[j] = str[k];
				str[k] = temp;
				
				j++;
				k--;
			}
			j=i+1;
		}
	}
	
	cout << str;
}
