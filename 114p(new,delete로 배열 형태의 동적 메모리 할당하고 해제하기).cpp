#include <iostream>
using namespace std;
int main() {
	int* pt_int_array_value = new int[5];

	for (int i = 0; i < 5; i++) {
		pt_int_array_value[i] = i; // 할당된 배열 변수에 0~4까지 순서대로 넣기
	}
	for (int i = 0; i < 5; i++) {
		cout << pt_int_array_value[i] << endl; //배열 변수 출력
	}
	delete[] pt_int_array_value;
	return 0;
}