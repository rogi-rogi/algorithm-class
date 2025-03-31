#include <iostream>
using namespace std;

int n, m;
int arr[9] = {};
bool visited[9] = { false };

void Dfs(int num, int count)
{
	if (count == m)
	{
		for (int i = 0; i < m; ++i)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = num; i <= n; ++i)
	{
		if (visited[i] == false)
		{
			visited[i] = true;
			arr[count] = i;
			Dfs(i+1, count+1);
			visited[i] = false;
		}
	}
}

int main()
{
	cin >> n >> m;
	Dfs(1, 0);

	return 0;
}