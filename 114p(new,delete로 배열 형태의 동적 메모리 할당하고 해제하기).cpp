#include <iostream>
using namespace std;
int main() {
	int* pt_int_array_value = new int[5];

	for (int i = 0; i < 5; i++) {
		pt_int_array_value[i] = i; // �Ҵ�� �迭 ������ 0~4���� ������� �ֱ�
	}
	for (int i = 0; i < 5; i++) {
		cout << pt_int_array_value[i] << endl; //�迭 ���� ���
	}
	delete[] pt_int_array_value;
	return 0;
}