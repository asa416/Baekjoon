#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n;

	cin >> n;

	int num{};
	int count{};
	while (count != n) {
		num++;
		string str = to_string(num);
		size_t nPos = str.find("666");
		if (nPos != string::npos)
			count++;
	}

	cout << num;

	return 0;
}