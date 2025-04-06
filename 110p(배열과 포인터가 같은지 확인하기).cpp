#include <iostream>
using namespace std;

int main() {
	int array[5] = { 1,2,3,4,5 };
	int* pointer_array = array;

	cout << "array:" << array << endl;//배열의 이름은 포인터처럼 작동하기 때문에 배열 전체가 출력되는 것이 아니라 배열의 주소가 출력된다.
	cout << "pointer_array" << pointer_array << endl;
	
	//둘은 같은 주소를 가리키고 있지만 sizeof를 통해 크기를 비교해 보면 완전히 다른 것을 알 수 있다.
	cout << "sizeof(array)" << sizeof(array) << endl;
	cout << "sizeof(pointer_array)" << sizeof(pointer_array) << endl;

	return 0;
}