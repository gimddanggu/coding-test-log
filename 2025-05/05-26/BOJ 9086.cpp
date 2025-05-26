// ¹®ÀÚ¿­

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t;
	string str;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> str;

		cout << str[0] << str[str.size() - 1] << '\n';
		cout << str[0] << str.back() << '\n';

	}

	return 0;
}