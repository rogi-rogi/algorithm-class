#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> origin_vector;

void Init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void Check(int num)
{
	int mid = origin_vector.size() / 2;
	int left = 0;
	int right = origin_vector.size() - 1;
	bool is_in = false;
	while (left <= right)
	{
		if (num < origin_vector[mid])
		{
			right = mid - 1;
			mid = (left + right) / 2;
		}
		else if (num > origin_vector[mid])
		{
			left = mid + 1;
			mid = (left + right) / 2;
		}
		else
		{
			is_in = true;
			break;
		}
	}

	if (is_in)
		cout << "1\n";
	else
		cout << "0\n";
}

int main()
{
	Init();

	int n = 0;
	cin >> n;

	vector<int> test_vector;

	for (int a, i = 0; i < n; ++i)
	{
		cin >> a;
		origin_vector.push_back(a);
	}

	sort(origin_vector.begin(), origin_vector.end());

	int m = 0;
	cin >> m;
	for (int a, i = 0; i < m; ++i)
	{
		cin >> a;
		test_vector.push_back(a);
	}

	for (int i = 0; i < m; ++i)
	{
		Check(test_vector[i]);
	}

	return 0;
}