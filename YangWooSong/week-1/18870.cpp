#include <iostream>
#include <vector>
#include <set>
#include <map> 
#include <algorithm>
using namespace std;

void init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int main()
{
	init();

	int Count = 0;
	cin >> Count;

	vector<int> vOriginInput;

	for (int a, i = 0; i < Count; ++i)
	{
		cin >> a;
		vOriginInput.push_back(a);
	}

	//중복 제거 후 정렬
	set<int> setList;
	for(auto& iter: vOriginInput)
	{
		setList.insert(iter);
	}

	//딕셔너리 생성 및 출력
	map<int, int> dict;
	int tmp = 0;
	for (auto& iter : setList)
	{
		dict[iter] = tmp;
		++tmp;
	}

	for (auto& iter : vOriginInput)
	{
		cout << dict[iter] << " ";
	}

	return 0;
}
