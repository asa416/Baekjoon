#include <iostream>
using namespace std;
const int MAX{ 9 };

int N, M;
int arr[MAX];
bool visited[MAX];


void dfs(int k) {
	if (k == M) {
		for (auto i = 0; i < M; ++i) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
	}
	else {
		for (auto i = 1; i <= N; ++i) {
			if (!visited[i]) {
				visited[i] = true;
				arr[k] = i;
				if ((k != 0 && arr[k - 1] < arr[k]) || k == 0)
					dfs(k + 1);
				visited[i] = false;
			}
		}
	}
}

int main()
{
	cin >> N >> M;
	dfs(0);
}