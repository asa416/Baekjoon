#include <iostream>
#include <vector>
using namespace std;

char case1[8][8] = {
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'}
};

char case2[8][8] = {
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'}
};

int main()
{
	int n, m;

	cin >> n >> m;

	char board[50][50]{};
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> board[i][j];
		}
	}

	int min{ 32 };

	for (int i = 0; i < n - 7; ++i) {
		for (int j = 0; j < m - 7; ++j) {
			int num1{};
			int num2{};
			for (int x = 0; x < 8; ++x) {
				for (int y = 0; y < 8; ++y) {
					if (case1[x][y] != board[i + x][j + y]) {
						num1++;
					}
				}
			}
			for (int x = 0; x < 8; ++x) {
				for (int y = 0; y < 8; ++y) {
					if (case2[x][y] != board[i + x][j + y]) {
						num2++;
					}
				}
			}
			if (num2 < num1) {
				if (num2 < min) {
					min = num2;
				}
			}
			else {
				if (num1 < min) {
					min = num1;
				}
			}
		}
	}

	cout << min;

	return 0;
}