#include <bits/stdc++.h>
using namespace std;
// 25.05.010 RGB 거리  (다이나믹 프로그래밍 복습)
int N;
int dp[1005][3]; // red greeen blue

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i=0; i<N; i++) {
        for(int j=0; j<3; j++) {
            cin >> dp[i][j];
        }
    }
    
    for(int i=0; i<N; i++) {
        dp[i][0] += min(dp[i-1][1],dp[i-1][2]);
        dp[i][1] += min(dp[i-1][0],dp[i-1][2]);
        dp[i][2] += min(dp[i-1][0],dp[i-1][1]);
    }
    
    int ans = min(min(dp[N-1][0],dp[N-1][1]),dp[N-1][2]);
    cout << ans;

    return 0;
}
