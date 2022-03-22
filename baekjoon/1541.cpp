#include <iostream>
#include <string>
#include <sstream>
#include <array>
#include <vector>
using namespace std;

int main()
{
	string str;
	cin >> str;

	istringstream is(str);

	vector<array<char, 51>> vec;

	for (array<char, 51> a; is.getline(&a[0], 51, '-');)
		vec.push_back(a);

	int sum{};
	vector<int> v;
	for (auto& a : vec) {
		int num{};
		istringstream iss(&a[0]);
		vector<array<char, 6>> va;
		for (array<char, 6> ar; iss.getline(&ar[0], 6, '+');) {
			va.push_back(ar);
		}
		for (auto& ar : va) {
			int n{};
			stringstream ss(&ar[0]);
			ss >> n;
			num += n;
		}
		v.push_back(num);
		va.clear();
	}
	for (auto& n : v) {
		sum -= n;
	}
	sum += v[0] * 2;
	cout << sum;
}