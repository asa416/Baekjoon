#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<pair<int, int>> times;

	int start, end;
	for (int i = 0; i < n; ++i) {
		cin >> start >> end;
		times.push_back(pair<int, int>(start, end));
	}
	sort(times.begin(), times.end());

	vector<pair<int, int>> result;

	result.push_back(times[0]);

	for (int i = 1; i < n; ++i) {
		if (result.back().second <= times[i].first)
			result.push_back(times[i]);
		else if (result.back().second > times[i].second) {
			result.pop_back();
			result.push_back(times[i]);
		}
	}

	cout << result.size();
}