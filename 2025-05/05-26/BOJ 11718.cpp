// �״�� ����ϱ�

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;
	/*while (true) {
		cin >> str;
		cout << str;
		if (str == "") {
			break;
		}
	}*/

	while (getline(cin, str))
	{
		cout << str << endl;
	}
	
	return 0;
}
