#include <iostream>
#include <queue>
using namespace std;

void Init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main() {
	Init();

	int n = 0;
	cin >> n;

	priority_queue<int, vector<int>, greater<int>> q;
	for (int a, i = 0; i < n; ++i)
	{
		cin >> a;

		if (a == 0) {
			if (q.size() == 0)
				cout << 0 << "\n";
			else
			{
				cout << q.top() << "\n";
				q.pop();
			}
		}
		else
			q.push(a);
	}
	return 0;
}