#include <iostream>
using namespace std;

void print() {
	//�Լ� ������ ���� ����
	int value = 10;
	cout << "print �Լ� ���ο����� ���� ���� value:" << value << endl;
}
int main() {
	int value = 5;
	cout << "main �Լ� ���ο����� ���� ���� value:" << value << endl;

	//print�Լ� ȣ��
	print();
	//print�Լ� ȣ�� �Ŀ��� main �Լ��� value�� ������ ���� ����.
	cout << "�ٽ� main�Լ� ���ο����� ���� ���� value:" << value << endl;

	return 0;
}