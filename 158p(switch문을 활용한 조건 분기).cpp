#include <iostream>
using namespace std;

int main() {
	int in;

	cout << "1~3 정수 입력:";
	cin >> in;

	switch (in) {
	case 1:
		cout << "입력한 수는 1입니다." << endl;
		break;
	case 2:
		cout << "입력한 수는 2입니다." << endl;
		break;
	case 3:
		cout << "입력한 수는 3입니다." << endl;
		break;
	default:
		cout << "입력한 수는 1~3 범위 밖입니다." << endl;
		break;
	}
	return 0;
}