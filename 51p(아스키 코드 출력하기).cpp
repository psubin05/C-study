#include <iostream>
using namespace std;

int main() {
	cout << "�ƽ�Ű �ڵ� ����ϱ�[32~126]:\n";
	
	for (char i = 32; i <= 126; i++) {
		cout << i << ((i % 16 == 15) ? '\n' : ' ');
	}
	return 0;
}