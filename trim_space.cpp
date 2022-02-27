#include <iostream>
using namespace std;

int main() {
	char input[100];
	cin.getline(input, 100);
	
	int count=0, i=0;
	for ( ; input[i] != '\0'; i++ ) {
		input[i - count] = input[i];
		if(input[i] == ' ') {
			count++;
		}
	}
	input[i-count] = '\0';
	cout << input;
}
