#include <iostream>
using namespace std;

int main() {
	int* pt_int_value = new int;

	*pt_int_value = 100;  //�޸� ������ 100�̶�� ���� ����. ���࿡ �̰� ���ٸ� �����Ⱚ�� �����ϰ� �ɰ�
	cout << *pt_int_value << endl;

	delete pt_int_value;

	return 0;
}