#include <iostream>
#include <string>
#include <memory>
using namespace std;

const string STACKPUSH = "push";
const string STACKPOP = "pop";
const string STACKSIZE = "size";
const string STACKEMPTY = "empty";
const string STACKTOP = "top";

struct stack {
	size_t size;
	size_t capacity;
	unique_ptr<int[]> p;	
	stack() {
		size = 0;
		capacity = 10;
		p = make_unique<int[]>(capacity);
	}
	void push(int x) {
		if (size == capacity) {
			capacity *= 2;
			unique_ptr<int[]> np(new int[capacity]);
			for (int i = 0; i < size; ++i)
				np[i] = p[i];
			p.release();
			p = move(np);
		}
		p[size++] = x;
	}
	int pop() {
		if (size == 0)
			return -1;
		size -= 1;
		return p[size];
	}
	int getSize() const {
		return this->size;
	}
	bool empty() {
		return !size;
	}
	int top() const {
		if (size == 0)
			return -1;
		return p[size - 1];
	}
};

int main()
{
	stack s;
	
	int n;
	cin >> n;

	string str;
	for (int i = 0; i < n; ++i) {
		cin >> str;
		if (str.compare(STACKPUSH) == 0) {
			int temp;
			cin >> temp;
			s.push(temp);
		}
		else if (str.compare(STACKPOP) == 0) {
			cout << s.pop() << '\n';
		}
		else if (str.compare(STACKSIZE) == 0) {
			cout << s.getSize() << '\n';
		}
		else if (str.compare(STACKEMPTY) == 0) {
			if (s.empty())
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (str.compare(STACKTOP) == 0) {
			cout << s.top() << '\n';
		}
	}
}