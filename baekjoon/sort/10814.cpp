#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Member {
public:
	int age;
	string name;
	Member(int n, string str) : age(n), name(str) {};
};

int main()
{
	int n;
	cin >> n;

	int a;
	string str;

	vector<Member> members;

	for (int i = 0; i < n; ++i) {
		cin >> a >> str;
		Member* mem = new Member(a, str);
		members.push_back(*mem);
	}

	stable_sort(members.begin(), members.end(), [](Member a, Member b){
		return a.age < b.age;
		});

	for (int i = 0; i < n; ++i) {
		cout << members[i].age << ' ' << members[i].name << '\n';
	}
}