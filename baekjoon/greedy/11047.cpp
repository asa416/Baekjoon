#include <iostream>
#include <vector>
using namespace std;

const int INF = 100'000'000;

int main()
{
	int n;
	int k;
	cin >> n >> k;
	int coins[10]{};
	for (int i = 0; i < n; ++i) {
		cin >> coins[i];
	}

	int result{};

	while (k != 0) {
		int index{};
		for (int i = 0; i < n; ++i) {
			if (k < coins[i]) {
				index = i - 1;
				break;
			}
			else if (k == coins[i]) {
				index = i;
				break;
			}
			index = i;
		}
		result += k / coins[index];
		k %= coins[index];
	}

	cout << result;
}