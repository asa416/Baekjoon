#include <iostream>
#include <vector>
using namespace std;

class Size {
public:
	int x, y;

	Size(int p, int q) : x(p), y(q) {};
};

int main()
{
	int n;

	cin >> n;

	vector<Size> vec;
	vector<int> nums;
	vector<int> ranking;

	int x, y;
	for (int i = 0; i < n; ++i) {
		cin >> x >> y;
		Size* size = new Size(x, y);
		vec.push_back(*size);
		nums.push_back(0);
		ranking.push_back(0);
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i == j)
				continue;
			if (vec[i].x < vec[j].x) {
				if (vec[i].y < vec[j].y) {
					nums[i]++;
				}
			}
		}
	}

	for (auto n : nums) {
		cout << n + 1 << ' ';
	}

	return 0;
}