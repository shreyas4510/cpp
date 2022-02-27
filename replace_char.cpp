#include<iostream>
using namespace std;

int main() {
	char str[1000];
	cin >> str;
	char var, replace_var;
	cin >> var >> replace_var;
	
	for ( int i=0; str[i] != '\0'; i++ ) {
		if ( str[i] == var ) {
			str[i] = replace_var;
		}
	}
	cout << str;
}
