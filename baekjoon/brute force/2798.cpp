#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	int sum{};

	vector<int> vec;

	int num{};
	for (int i = 0; i < n; ++i) {
		cin >> num;
		vec.push_back(num);
	}

	int max{};

	for (int i = 0; i < n - 2; ++i) {
		sum += vec[i];
		for (int j = i + 1; j < n - 1; ++j) {
			sum += vec[j];
			for (int k = j + 1; k < n; ++k) {
				sum += vec[k];
				if (sum <= m) {
					if (sum > max) {
						max = sum;
					}
				}
				sum -= vec[k];
			}
			sum -= vec[j];
		}
		sum -= vec[i];
	}

	cout << max;
	return 0;
}