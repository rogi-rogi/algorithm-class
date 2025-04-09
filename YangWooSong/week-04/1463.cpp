#include <iostream>
#include <queue>
using namespace std;


int main()
{
	int n;
	cin >> n;

	queue<pair<int, int>> save;
	save.push({ n, 0 });

	while (save.front().first > 1)
	{
		int num = save.front().first;
		int count = save.front().second;

		if (num % 3 == 0)
		{ 
			save.push({ num / 3, count + 1 });
		}
		if (num % 2 == 0)
		{
			save.push({ num / 2,  count + 1 });
		}

		save.push({ num-1,  count+1 });


		save.pop();
	}

	cout << save.front().second;

	return 0;
}