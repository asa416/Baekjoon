#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<pair<int, int>> arr;

	int x;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		arr.push_back(pair<int, int>(x, i));
	}

	
	sort(arr.begin(), arr.end());

	int i = 0;

	int num{};

	vector<pair<int, int>> output;
	output.push_back(pair<int, int>(num, arr[0].second));
	for (int i = 1; i < n; ++i) {
		if (arr[i].first != arr[i - 1].first) {
			num++;
		}
		output.push_back(pair<int, int>(num, arr[i].second));
	}

	sort(output.begin(), output.end(), [](pair<int, int> a, pair<int, int> b) {
		return a.second < b.second;
		});

	for (int i = 0; i < n; ++i) {
		cout << output[i].first << ' ';
	}
}