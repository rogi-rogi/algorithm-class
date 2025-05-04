#include <iostream>
using namespace std;

int n, m;
int arr[9];
bool visited[9] = { false };	//이미 방문했는지 판별

void Init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void dfs(int count)
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
	
	for (int i = 1; i <= n; ++i) {
		if (visited[i] == false)
		{
			visited[i] = true;
			arr[count] = i;
			dfs(count + 1);
			visited[i] = false;
		}

	}
}

int main()
{
	Init();

	cin >> n >> m;
	dfs(0);

	return 0;
}