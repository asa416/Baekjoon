#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;

	int numbers[1000];

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> numbers[i];
	}

	sort(numbers, numbers + n);

	for (int i = 0; i < n; ++i) {
		cout << numbers[i] << '\n';
	}
}