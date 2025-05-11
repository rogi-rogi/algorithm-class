#include <bits/stdc++.h>
using namespace std;
// 25.05.11 동전2 (다이나믹 프로그래밍)
int n,k;
int arr[105];
int dp[10005];
const int INF = 1e9;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    fill(dp,dp+k+1,INF);
    
    dp[0] = 0; // 0원은 0
    for(int i=0; i<n; i++) {
        for(int j=arr[i]; j<=k; j++) {
            dp[j] = min(dp[j],dp[j-arr[i]]+1); 
        }
    }
    if(dp[k]==INF) cout << -1;
    else cout << dp[k];

    return 0;
}
