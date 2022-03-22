#include <iostream>
using namespace std;

const int MAX{15};

int N;
bool visited[MAX][MAX];
int cnt{};

void queen(int k) {
	if (k == N) {
		cnt++;
	}
	else {
		for (int j = 1; j <= N; ++j) {
			if (!visited[k][j]) {
				for (int i = 1; i <= N; ++i) {
					visited[i][j] = true;
				}
			}
		}
	}
}

int main()
{
	cin >> N;

}