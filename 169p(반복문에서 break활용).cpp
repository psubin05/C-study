#include <iostream>
using namespace std;

int main() {
	for (int count = 0; count < 10; count++) {
		cout << "count:" << count << endl;
		if (count == 5) {
			cout << "break�� �ݺ��� Ż��" << endl;
			break;
		}
		cout << "�ݺ��� ����" << endl;
		return;
	}
}