#include <iostream>
using namespace std;

int main() {
	cout << "short:" << sizeof(short) << "bytes" << endl;
	cout << "unsigned short:" << sizeof(unsigned short) << "bytes" << endl;

	cout << "__int8:" << sizeof(__int8) << "bytes" << endl;
	cout << "__int16:" << sizeof(__int16) << "bytes" << endl;

	return 0;
}