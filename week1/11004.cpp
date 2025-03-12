#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int x;
	cin >> x;
	vector<int> v;
	for (int i = 0; i < x; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < x; i++) {
		cout << v[i] << '\n';
	}
}