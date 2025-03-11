#include <iostream>
#include<cstring>
#include <vector>
#include <algorithm>

using namespace std;

#define MAX_E 15
#define MAX_S 28
#define MAX_M 19

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int iInput[3];
	int iCal[3];
	int iResult{ 0 };

	for (int i = 0; i < 3; ++i)
	{
		cin >> iInput[i];
	}


	memset(iCal, 0, sizeof(int) * 3);
	while (1)
	{
		iCal[0] = iCal[0] % MAX_E + 1;
		iCal[1] = iCal[1] % MAX_S + 1;
		iCal[2] = iCal[2] % MAX_M + 1;

		++iResult;

		if (iInput[0] == iCal[0] && iInput[1] == iCal[1] && iInput[2] == iCal[2])
		{
			cout << iResult;
			break;
		}
	}

	return 0;
}