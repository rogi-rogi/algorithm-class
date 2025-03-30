#include <iostream>
#include <string>
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

	string s1, s2, s3;

	cin >> s1;
	cin >> s2;
	cin >> s3;

	int Answer = 0;

	if (atoi(&s1[0]) != 0)
		Answer = stoi(s1) + 3;
	else if (atoi(&s2[0]) != 0)
		Answer = stoi(s2) + 2;
	else if (atoi(&s3[0]) != 0)
		Answer = stoi(s3) + 1;

	if (Answer % 3 == 0 && Answer % 5 == 0)
		cout << "FizzBuzz" << endl;
	else if (Answer % 3 == 0)
		cout << "Fizz" << endl;
	else if (Answer % 5 == 0)
		cout << "Buzz" << endl;
	else
		cout << to_string(Answer) << endl;

	return 0;
}
