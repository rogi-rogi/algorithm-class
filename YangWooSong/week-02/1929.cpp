#include <iostream>
#include <vector>
using namespace std;

void Init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

vector <int> Cal_Eu(int m, int n)
{
	vector<bool> isPrime(n+1, true);
	isPrime[0] = isPrime[1] = false; //0과 1은 소수가 아님

	for (int i = 2; i * i <= n; ++i)
	{
		if (isPrime[i])
		{
			for (int j = i * i; j <= n; j += i)
			{
				isPrime[j] = false;
			}
		}
	}

	vector<int> PrimeTmp;
	for (int i = 2; i < isPrime.size(); ++i)
	{
		if (isPrime[i])
			PrimeTmp.push_back(i);
	}

	return PrimeTmp;
}

int main()
{
	int M = 0, N = 0;
	cin >> M >> N;

	vector<int> prime = Cal_Eu(M, N);
		
	for (int i = 0; i < prime.size(); ++i)
	{
		if (prime[i] >= M)
			cout << prime[i] << "\n";
	}
	return 0;
}