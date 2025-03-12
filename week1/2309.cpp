#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main1() {
	int sum = 0;
	vector<int> v;
	for (int i = 0; i < 9; i++) {
		int num;
		cin >> num;
		v.push_back(num);
		sum += num;
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		for (int j = i + 1; j < v.size(); j++) {
			if ((sum - v[i] - v[j]) == 100) {
				for (int k = 0; k < v.size(); k++) {
					if (k != i && k != j) {
						cout << v[k] << '\n';
					}
				}
				return 0;
			}
		}
	}

}