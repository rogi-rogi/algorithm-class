#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void Init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout << fixed;
	cout.precision(2);
}

int main()
{
	Init();

	int n = 0;
	cin >> n;

	string s_input;
	cin >> s_input;

	//숫자 입력 받기
	vector<int> num_vector;
	for (int a, i = 0; i < n; ++i)
	{
		cin >> a;
		num_vector.push_back(a);
	}

	//후위 표기식 계산하기
	stack<double> num_stack;
	for (int i = 0; i < s_input.length(); ++i) {
		if (s_input[i] >= 'A' && s_input[i] <= 'Z')
		{
			num_stack.push(num_vector[s_input[i] - 'A']);
		}
		else 
		{
			double num1, num2, total;
			num1 = num_stack.top();
			num_stack.pop();
			num2 = num_stack.top();
			num_stack.pop();

			switch (s_input[i])
			{
			case '*':
				total = num2 * num1;
				break;
			case '/':
				total = num2 / num1;
				break;
			case '+':
				total = num2 + num1;
				break;
			case '-':
				total = num2 - num1;
				break;
			}

			num_stack.push(total);
		}
	}

	cout << num_stack.top();

}