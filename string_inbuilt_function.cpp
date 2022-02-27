#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str1[100] = "Shreyas Deshmukh", str2[100] = "Rahul";
	
//	cout << "Enter first string : ";
//	cin.getline(str1, 100);
//	cout << "Enter Second String : ";
//	cin.getline(str2, 100);
//	
//	cout << "Length of first string is : " << strlen(str1) << endl;
//	cout << "Length of second string is : " << strlen(str2) << endl;
//	
//	cout << strcmp(str1, str2);
	
	strncpy( str2, str1, 4 );
	cout << str2;
	
	strcpy( str2, str1 );
	cout << str2;
	
}
