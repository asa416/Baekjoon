#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;

	cin >> n;

	vector<int> numbers;

	int num;
	for (int i = 0; i < n; ++i) {
		cin >> num;
		numbers.push_back(num);
	}

	sort(numbers.begin(), numbers.begin() + n);

	for (auto num : numbers) {
		cout << num << '\n';
	}
}