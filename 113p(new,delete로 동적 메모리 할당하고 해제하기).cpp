#include <iostream>
using namespace std;

int main() {
	int* pt_int_value = new int;

	*pt_int_value = 100;  //메모리 공간에 100이라는 값을 지정. 만약에 이게 없다면 쓰레기값을 지정하게 될것
	cout << *pt_int_value << endl;

	delete pt_int_value;

	return 0;
}