#include <iostream>
using namespace std;

int main() {
	int input_num;

	cout << "�����Է�:";
	cin >> input_num;

	if (input_num > 0) {
		cout << "�Է��� ���� ���" << endl;
	}
	else if (input_num < 0) {
		cout << "�Է��� ���� ����" << endl;
	}
	else {
		cout << "�Է��� ���� 0�Դϴ�." << endl;
	}
	return 0;
}