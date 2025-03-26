#include <iostream>
#include <vector>
using namespace std;

void Init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main()
{
	Init();

	int k = 0;
	int n = 0;
	unsigned int rope_max = 0;
	vector<int> ropes;

	cin >> k >> n;

	for (int i = 0; i < k; ++i)
	{
		unsigned int a = 0;
		cin >> a;
		ropes.push_back(a);

		if (a > rope_max)
			rope_max = a;
	}

	unsigned int low = 1;
	unsigned int high = rope_max;
	unsigned int answer = 0;

	while (low <= high)
	{
		unsigned int mid = (low + high) / 2;
		unsigned int count = 0;

		for (int i = 0; i < ropes.size(); ++i)
		{
			count += ropes[i] / mid;
		}

		if (count < n)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
			answer = max(answer, mid);
		}
	}

	cout << answer;

	return 0;
}