#include <iostream>
#include <stack>
using namespace std;

void Init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main()
{
	Init();

	string input;
	cin >> input;

	int total = 0;
	stack<char> s;
	for (int i = 0; i < input.length(); ++i)
	{
		if (input[i] == '(') {
			s.push('(');
		}
		else {
			if (i == 0 )
			{
				continue;
			}
			else if (input[i-1] == '(')	//레이저
			{
				s.pop();
				total += s.size();
			}
			else //쇠막대
			{
				s.pop();
				total += 1;
			}
		}
	}

	cout << total;
	return 0;

}