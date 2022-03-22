#include <iostream>
using namespace std;
const int MAX{ 9 };

int N, M;
int arr[MAX];

void dfs(int k) {
	if (k == M) {
		for (auto i = 0; i < M; ++i) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
	}
	else {
		for (auto i = 1; i <= N; ++i) {
			arr[k] = i;
			if ((k != 0 && arr[k - 1] <= arr[k]) || k == 0)
				dfs(k + 1);
		}
	}
}

int main()
{
	cin >> N >> M;
	dfs(0);
}