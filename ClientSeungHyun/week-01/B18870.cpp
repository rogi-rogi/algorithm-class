#include <iostream>
#include<cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n;
    long long temp;
    vector<long long> Origins;
    vector<long long> Sorts;

    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        cin >> temp;
        Origins.emplace_back(temp);
        Sorts.emplace_back(temp);
    }

    sort(Sorts.begin(), Sorts.end());
    Sorts.erase(unique(Sorts.begin(), Sorts.end()), Sorts.end());

    for (int i = 0; i < n; i++)
    {
        cout << lower_bound(Sorts.begin(), Sorts.end(), Origins[i]) - Sorts.begin() << " ";
    }

	return 0;
}
