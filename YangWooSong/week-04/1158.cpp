#include <iostream>
#include <queue>
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

	int n, k;
	cin >> n >> k;

	queue<int> num_list;

	for (int i = 0; i < n; ++i)
	{
		num_list.push(i + 1);
	}

	cout << "<";

	int index = 0;

	while (num_list.size() > 1)
	{
		index++;
		if (index == k)
		{
			cout << num_list.front() << ", ";
			num_list.pop();
			index = 0;
		}
		else
		{
			int a = num_list.front();
			num_list.push(a);
			num_list.pop();
		}
	}

	cout << num_list.front();

	cout << ">";
	return 0;
}