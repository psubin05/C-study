#include <iostream>
#include <string>
using namespace std;

int main() {
	int customer = 0;

	cout << "���� �湮 �մ�:";
	cin >> customer;

	string* bread = new string[customer];

	for (int i = 0; i < customer; i++) {
		bread[i] = "��_" + to_string(i);
	}
	cout << endl << "--����Ȼ�--" << endl;
	for (int i = 0; i < customer; i++) {
		cout << *(bread + i) << endl;
	}
	delete[]bread;

	return 0;
}
