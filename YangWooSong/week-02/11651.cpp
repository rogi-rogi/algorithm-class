#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

struct Inform
{
	int first = 0;
	int second = 0;
};

bool Compare(Inform& a, Inform& b)
{
	if (a.second == b.second)
	{
		return	a.first < b.first;
	}
	else
		return	a.second < b.second;
}

int main()
{
	Init();
    
	vector<Inform> vList;

	int count = 0;
	cin >> count;

	for (int i = 0; i < count; ++i)
	{
		Inform p;
		cin >> p.first >> p.second;
		vList.push_back(p);
	}

	sort(vList.begin(), vList.end(), Compare);

	for (int i = 0; i < count; ++i)
	{
		cout << vList[i].first << " " << vList[i].second << "\n";
	}

	return 0;
}
