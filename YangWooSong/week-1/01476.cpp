#include <iostream>
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

	int iInput[3] = {};
	int iCal[3] = {};
	int iCount = 0;

	cin >> iInput[0] >> iInput[1] >> iInput[2];

	while (1)
	{
		if ((iCal[0] != iInput[0]) || (iCal[1] != iInput[1]) || (iCal[2] != iInput[2]))
		{
			if (iCal[0] < 15)
				iCal[0]++;
			else
				iCal[0] = 1;

			if (iCal[1] < 28)
				iCal[1]++;
			else
				iCal[1] = 1;

			if (iCal[2] < 19)
				iCal[2]++;
			else
				iCal[2] = 1;

			iCount++;

		}
		else
			break;
	}

	cout << iCount;

	return 0;
}
