#include <iostream>
#include <queue>
using namespace std;

deque<pair<int,int>> q;

int main() {
	int n = 0;
	cin >> n;
	
	for (int a, i = 0; i < n; ++i)
	{
		cin >> a;
		q.push_back({a,i});
	}

	int count = q.front().first;
	cout << q.front().second << " ";
	q.pop_front();

	while (q.empty() == false)
	{
		if (count == 1) {
			count = q.front().first;
			cout << q.front().second << " ";
			q.pop_front();
		}
		else if (count == -1) {
			count = q.back().first;
			cout << q.back().second << " ";
			q.pop_back();
		}
		else if (count > 0)
		{
			q.push_back(q.front());
			q.pop_front();
			count--;
		}
		else if (count < 0) {
			q.push_front(q.back());
			q.pop_back();
			count++;
		}
	}
	return 0;
}