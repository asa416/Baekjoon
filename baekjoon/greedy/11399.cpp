#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> vec;
	int p{};
	for (int i = 0; i < n; ++i) {
		cin >> p;
		vec.push_back(p);
	}
	sort(vec.begin(), vec.end());
	int sum{};
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j <= i; ++j)
			sum += vec[j];
	}
	cout << sum;
}