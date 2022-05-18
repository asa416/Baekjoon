#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int num{};
	stack<int> s;

	for (int i = 0; i < n; ++i) {
		cin >> num;
		if (num != 0)
			s.push(num);
		else
			s.pop();
	}

	int sum{};
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	cout << sum;
}