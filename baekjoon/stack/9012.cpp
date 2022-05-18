#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	// not using stack
	//int n;
	//cin >> n;

	//string str;

	//int rc{}, lc{};

	//for (int i = 0; i < n; ++i) {
	//	cin >> str;
	//	rc = 0;
	//	lc = 0;
	//	for (auto c : str) {
	//		if (c == '(') {
	//			rc++;
	//		}
	//		else {
	//			lc++;
	//			if (lc > rc)
	//				break;
	//		}
	//	}
	//	if (lc != rc)
	//		cout << "NO\n";
	//	else
	//		cout << "YES\n";
	//}

	// using stack
	int n;
	cin >> n;

	string str;
	stack<char> st;

	bool check;
	for (int i = 0; i < n; ++i) {
		cin >> str;
		check = true;
		for (auto c : str) {
			if (c == '(')
				st.push(c);
			else {
				if (st.empty()) {
					check = false;
					break;
				}
				st.pop();
			}
		}
		if (check && st.empty())
			cout << "YES\n";
		else
			cout << "NO\n";
		while (!st.empty()) st.pop();
	}
}