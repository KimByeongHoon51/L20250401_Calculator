#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	float c;
	float d;

	cout << "정수 입력: ";
	cin >> a;
	cout << "정수 입력: ";
	cin >> b;
	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;
	cout << a << " % " << b << " = " << a % b << endl;
	cout << endl;

	cout << "실수 입력: ";
	cin >> c;
	cout << "실수 입력: ";
	cin >> d;
	cout << c << " + " << d << " = " << c + d << endl;
	cout << c << " - " << d << " = " << c - d << endl;
	cout << c << " * " << d << " = " << c * d << endl;
	cout << c << " / " << d << " = " << c / d << endl;

}