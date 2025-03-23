#include <iostream>
using namespace std;

void Init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

bool Calculate_LeapYear(const int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				return true;
			}

			return false;
		}

		return true;
	}

	return false;
}

int main()
{
	Init();

	while (1)
	{
		int year = 0;
		int month = 0;
		int day = 0;
		int count = 0;
		bool is_leap_year = false;

		cin >> day >> month >> year;

		if (day == 0 && month == 0 && year == 0)
			break;

		is_leap_year = Calculate_LeapYear(year);

		for (int i = 1; i < month ; ++i)
		{
			if (i == 2)
			{
				if (is_leap_year)
				{
					count += 29;
				}
				else
				{
					count += 28;
				}
			}
			else if (i == 4 || i == 6 || i == 9 || i == 11)
			{
				count += 30;
			}
			else
			{
				count += 31;
			}
		}

		count += day;

		cout << count << "\n";
	}
	

	return 0;
}