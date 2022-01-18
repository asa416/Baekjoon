#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
	int n;

	cin >> n;

	pair<int, int> pos[100000];

	for (int i = 0; i < n; ++i) {
		cin >> pos[i].first >> pos[i].second;
	}

	sort(pos, pos + n);

	for (int i = 0; i < n; ++i) {
		cout << pos[i].first << ' ' << pos[i].second << '\n';
	}

	return 0;
}