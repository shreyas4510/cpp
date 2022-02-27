#include <iostream>
using namespace std;

int main() {
	char str[100];
	cin >> str;
	
	int count=0;
	for( int i=0; str[i] != '\0'; i++ ) {
		count++;
	}
	
	int i=0, j=count-1;
	while ( i<j ) {
		char temp = str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	
	cout << str;
}
