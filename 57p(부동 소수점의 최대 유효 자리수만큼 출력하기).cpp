#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float float_value = 9.87654321f;    //숫자 뒤에 f를 붙여 부동소수점 표현
	double double_value = 9.87654321;  //숫자 뒤에 아무것도 붙이지 않아 double형 표현
	long double long_double_value = 9.87654321987654321l;  //숫자 뒤에 l을 붙여 double형 표현

	cout << "float:" << sizeof(float) << "bytes" << endl;
	cout << "float_value:" << setprecision(numeric_limits<float>::digits10 + 1) << float_value << endl << endl;

	cout << "double:" << sizeof(double) << "bytes" << endl;
	cout << "double_value:" << setprecision(numeric_limits<double>::digits10 + 1) << double_value << endl << endl;

	cout << "long double:" << sizeof(float) << "bytes" << endl;
	cout << "long double:" << setprecision(numeric_limits<long double>::digits10 + 1) << long_double_value << endl << endl;

	return 0;
}