#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str1[100], str2[100];
	cin >> str1 >> str2;
	
//	Approach 1
//	bool checkFlag = false;
//	for ( int i=0; i<strlen(str1); i++ ) {
//		bool flag = false;
//		for ( int j=0; j<strlen(str2); j++ ) {
//			if( str1[i] == str2[j] ) {
//				str1[i] = '0';
//				str2[j] = '0';
//				flag = true;
//				continue;
//			}                        			
//		}
//		if(!flag) {
//			cout << "false" << endl;
//			checkFlag = true;
//			break;
//		}
//	}
//	
//	if( !checkFlag ) {
//		cout << "true" << endl;
//	}

	int frequency[256] = {0};
	
	if( strlen(str1) == strlen(str2) ) {
		bool flag = false;
		for( int i=0; i<strlen(str1); i++ ) {
			frequency[int(str1[i])] += 1;
		}
		
		for( int i=0; i<strlen(str2); i++ ) {
			frequency[int(str2[i])] -= 1;
		}
		
		for( int i=0; i<(sizeof(frequency)/sizeof(frequency[0])); i++ ) {
			if ( frequency[i] != 0 ) {
				flag = true;
				cout << "false";
				break;
			}
		}
		if( !flag ) {
			cout << "true";
		}
	}
	else {
		cout << "false";
	}
}
