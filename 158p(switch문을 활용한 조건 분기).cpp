#include <iostream>
using namespace std;

int main() {
	int in;

	cout << "1~3 ���� �Է�:";
	cin >> in;

	switch (in) {
	case 1:
		cout << "�Է��� ���� 1�Դϴ�." << endl;
		break;
	case 2:
		cout << "�Է��� ���� 2�Դϴ�." << endl;
		break;
	case 3:
		cout << "�Է��� ���� 3�Դϴ�." << endl;
		break;
	default:
		cout << "�Է��� ���� 1~3 ���� ���Դϴ�." << endl;
		break;
	}
	return 0;
}