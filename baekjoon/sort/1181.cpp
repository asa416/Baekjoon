#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n;

	cin >> n;

	string str[20000];

	for (int i = 0; i < n; ++i) {
		cin >> str[i];
	}

	sort(str, str + n, [](string a, string b) {
		if (a.length() == b.length())
			return a < b;
		return a.length() < b.length();
		});
	
	for (int i = 0; i < n; ++i) {
		if (i != 0 && str[i] == str[i - 1])
			continue;
		cout << str[i] << '\n';
	}

	return 0;
}