#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;

	cin >> n;


	int sum{};

	for (int i = 0; i < n; ++i) {
		int k{ i };
		while (k != 0) {
			sum += k % 10;
			k /= 10;
		}
		sum += i;
		if (sum == n) {
			cout << i;
			return 0;
		}
		else {
			sum = 0;
		}
	}

	cout << "0";
	return 0;
}