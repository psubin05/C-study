#include <iostream>
using namespace std;

int main() {
	int array[5] = { 1,2,3,4,5 };
	int* pointer_array = array;

	cout << "array:" << array << endl;//�迭�� �̸��� ������ó�� �۵��ϱ� ������ �迭 ��ü�� ��µǴ� ���� �ƴ϶� �迭�� �ּҰ� ��µȴ�.
	cout << "pointer_array" << pointer_array << endl;
	
	//���� ���� �ּҸ� ����Ű�� ������ sizeof�� ���� ũ�⸦ ���� ���� ������ �ٸ� ���� �� �� �ִ�.
	cout << "sizeof(array)" << sizeof(array) << endl;
	cout << "sizeof(pointer_array)" << sizeof(pointer_array) << endl;

	return 0;
}