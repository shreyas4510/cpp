#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int basic_salary;
	char grade;
	
	cin >> basic_salary >> grade;
	
	float hra = ( basic_salary * 20 ) / 100.00;
	float da = ( basic_salary * 50 ) / 100.00;
	float allow = grade == 'A' ? 1700 : grade == 'B' ? 1500 : 1300;
	float pf = ( basic_salary * 11 ) / 100.00;
	
	cout << hra << endl << da << endl << allow << endl << pf << endl;
	
	float totalSalary = basic_salary + hra + da + allow - pf;
	cout << round(totalSalary);
}
