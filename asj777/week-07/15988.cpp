#include <bits/stdc++.h>
using namespace std;
// 25.05.09 1,2,3 더하기 3 (다이나믹 프로그래밍)
int T,N;
const long long mod = 1000000009;
long long dp[1000005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    while(T--) {
        cin >> N;
        for(int i=4; i<=N; i++) {
            dp[i] = dp[i-1] +dp[i-2] + dp[i-3];
            dp[i] %= mod;
        }
        cout << dp[N] << "\n";
    }


    return 0;
}
