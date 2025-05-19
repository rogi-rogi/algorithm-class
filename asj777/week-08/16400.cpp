#include <bits/stdc++.h>
using namespace std;
// 25.05.17 소수 화폐 (다이나믹 프로그래밍)
int N;
const long long mod = 123456789;
long long dp[40005]; // 소수를 이용해 N원을 만들 수 있는 경우의 수
vector<int> prime;

void getPrime(int limit) {
    vector<bool> v(limit+1,true);
    v[0] = v[1] = false;
    // 에라스토테네스의 체
    for(int i=2; i*i<=limit; i++) {
        if(v[i]) {
            for(int j= i*i; j<=limit; j+=i) {
                v[j] = false;
            }
        }
    }    
    
    for(int i=2; i<=limit; i++) {
        if(v[i]) prime.push_back(i); 
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    getPrime(N);

    dp[0] = 1; // 0원을 만들수 없는 경우는 없으므로 1가지

    for(int p : prime) {
        for(int i=p; i<=N; i++) {
            dp[i] = (dp[i] + dp[i-p]) % mod;
        }
    }

    cout << dp[N];

    return 0;
}
