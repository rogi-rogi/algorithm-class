#include <bits/stdc++.h>
using namespace std;
// 25.05.07 2×n 타일링 2 (다이나믹 프로그래밍 복습)
int N;
const int mod = 10007;
int dp[1005];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 3;
    for(int i=3; i<=N; i++) {
        dp[i] = dp[i-1] + 2 * (dp[i-2]);
        dp[i] %= mod;
    }
    
    cout << dp[N];
    return 0;
}
