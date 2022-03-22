#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> dist;
	vector<int> pay;

	int distance{};
	for (int i = 0; i < n - 1; ++i) {
		cin >> distance;
		dist.push_back(distance);
	}
	int money{};
	for (int i = 0; i < n - 1; ++i) {
		cin >> money;
		pay.push_back(money);
	}

	long long sum{};
	sum += static_cast<long long>(pay[0]) * dist[0];
	int nowOil{ pay[0] };
	for (int i = 1; i < n - 1; ++i) {
		if (pay[i] < nowOil) {
			nowOil = pay[i];
		}
		sum += static_cast<long long>(nowOil) * dist[i];
	}

	cout << sum;
}