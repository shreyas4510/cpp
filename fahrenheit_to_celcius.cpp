#include <iostream>
using namespace std;

int fahrenheit_to_celsius(int temp) {
	return (( temp - 32 ) * 5) / 9;
}

int main() {
	int s, e, w;
	cin >> s >> e >> w;
	for (; s <= e; s+=w ){
		cout << s << " " << fahrenheit_to_celsius(s) << endl;
	}
}
