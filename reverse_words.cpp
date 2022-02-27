#include <iostream>
using namespace std;

void reverseString( char str[], int len, int i ) {
	int j=len-1, k=0;
	while ( i<j ) {
		int temp = str[i];
		str[i] = str[len - 1 - k];
		str[len - 1 - k] = temp;	
		i++;
		k++;
		j--;
	}
}

void reverseWords( char str[], int len ) {
	int cursor=0;
	for( int i=0; i<len+1; i++ ) {
		if( str[i] == ' ' || str[i] == '\0' ) {
			reverseString(str, i, cursor);
			cursor = i+1;
		}
	}
}

int main() {
	char input[100], output[100];
	cin.getline(input, 100);
	int len = 0;
	while ( input[len] != '\0' ) {
		len++;
	}
	
//	first approach
//	int i = len-1, count=0;
//	while ( i >= 0 ) {
//		if( input[i] == ' ' || i == 0 ) {
//			if( i == 0 ) {
//				output[count] = ' ';
//				count++;
//			}
//			for( int j=i; j<len; j++ ) {
//				output[count] = input[j];
//				count++;
//			}
//			if( i == 0 ) {
//				output[count] = '\0';
//			}
//			len=i;
//		}
//		i--;
//	}
//	cout << output;

	reverseString(input, len, 0);
	reverseWords(input, len);
	cout << input;
}
