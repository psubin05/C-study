#include <iostream>
using namespace std;

int main() {
	int input_num;

	cout << "정수입력:";
	cin >> input_num;

	if (input_num > 0) {
		cout << "입력한 수는 양수" << endl;
	}
	else if (input_num < 0) {
		cout << "입력한 수는 음수" << endl;
	}
	else {
		cout << "입력한 수는 0입니다." << endl;
	}
	return 0;
}