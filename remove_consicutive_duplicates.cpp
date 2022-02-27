#include <iostream>
#include <cstring>
using namespace std;

int main() {
	
	char str[100];
	cin >> str;
	
	char cursor = str[0];
	int mark=0;
	for (int i=1; i<strlen(str); i++) {
		if( str[i] != cursor ) {
			str[mark+1] = str[i];
			cursor = str[i];
			mark++;
		}
	}
	str[mark+1] = '\0';
	cout << str;
}
