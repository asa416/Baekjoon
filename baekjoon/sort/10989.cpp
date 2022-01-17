#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	int numbers[10001]{};
	int num;
	for (int i = 0; i < n; ++i) {
		cin >> num;
		numbers[num]++;
	}

	for (int i = 1; i < 10001; ++i) {
		for (int j = 0; j < numbers[i]; ++j)
			cout << i << '\n';
	}

	return 0;
}
