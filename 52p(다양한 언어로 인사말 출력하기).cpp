#include <iostream>
#include <io.h>
#include <fcntl.h>

using namespace std;

int main() {
	wchar_t message_korean[] = L"�ݰ��� �����";

	cout << "Hello World" << endl;
	_setmode(_fileno(stdout), _O_U16TEXT);

	wcout << message_korean << endl;
	return 0;
}