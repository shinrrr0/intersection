#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <random>
using namespace std;

int getRandom(const int a, const int b) {
	return rand() % (b - a + 1) + a;
}

int main()
{
	srand(::time(0));
	vector<int> a, b;
	set<int> c;
	for (int i = 0; i < 20; ++i) {
		a.push_back(getRandom(0, 20));
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < 20; ++i) {
		b.push_back(getRandom(-10, 10));
	}
	sort(b.begin(), b.end());
	for (const auto& elem : a) {
		cout << elem << " ";
	}
	cout << endl;
	for (const auto& elem : b) {
		cout << elem << " ";
	}
	cout << endl;
	set_intersection(a.begin(), a.end(), b.begin(), b.end(), std::inserter(c, c.begin()));
	for (const auto& elem : c) {
		cout << elem << " ";
	}
}
