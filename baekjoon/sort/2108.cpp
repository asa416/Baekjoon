#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;

	cin >> n;

	vector<int> numbers;
	int count[8001]{};

	int num;
	int sum{};
	for (int i = 0; i < n; ++i) {
		cin >> num;
		numbers.push_back(num);
		sum += num;
		count[num + 4000]++;
	}

	sort(numbers.begin(), numbers.begin() + n);

	double avg = double(sum) / n;

	if (avg > 0) {
		cout << static_cast<int>(avg + 0.5) << '\n';
	}
	else {
		cout << static_cast<int>(avg - 0.5) << '\n';
	}

	cout << numbers[n / 2] << '\n';

	int max{};
	int maxValue{};
	for (int i = 0; i < 8001; ++i) {
		if (count[i] > max) {
			max = count[i];
		}
	}

	int maxCount{};
	for (int i = 0; i < 8001; ++i) {
		if (count[i] == max) {
			if (maxCount == 1) {
				maxValue = i - 4000;
				break;
			}
			maxCount++;
			maxValue = i - 4000;
		}
	}

	cout << maxValue << '\n';

	cout << numbers[n - 1] - numbers[0] << '\n';
}