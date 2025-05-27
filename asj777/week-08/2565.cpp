#include <bits/stdc++.h>
using namespace std;
// 25.05.16 전깃줄 (다이나믹 프로그래밍)
int N;
vector<pair<int,int>> arr;
int dp[505]; // LIS 끝의 길이는 1
int ans = 1; // LIS 기본길이

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    for(int i=0; i<N; i++) {
        int a,b;
        cin >> a >> b;
        arr.push_back({a,b});
    }    
    sort(arr.begin(),arr.end()); // 정렬 필요

    for(int i=0; i<N; i++) {
        dp[i] = 1;
        for(int j=0; j<i; j++) {
            if(arr[i].second>arr[j].second) {
                dp[i] = max(dp[i],dp[j]+1);  
            }
        }
        ans = max(ans,dp[i]);
    }

    cout << N-ans;

    return 0;
}
