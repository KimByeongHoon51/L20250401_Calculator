#include <iostream>

using namespace std;

int main()
{
	// int Number1 = 10;
	// int Number2 = 20;

	// cout << (Number1 + Number2) << endl; 변수마다 계산 순서가 어떤지 모르기 때문에 괄호 써놓는 습관 들이기
	// cout << (Number1 - Number2) << endl;
	// cout << (Number1 * Number2) << endl;
	// cout << (Number1 / Number2) << endl;

	// float Number3 = 10.5;
	// float Number4 = 2.0;

	// cout << (Number3 + Number4) << endl;
	// cout << (Number3 - Number4) << endl;
	// cout << (Number3 * Number4) << endl;
	// cout << (Number3 / Number4) << endl;

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

	return 0;
}