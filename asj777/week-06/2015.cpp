#include <bits/stdc++.h>
using namespace std;
// 25.05.03 수들의 합4 
int N;
long long arr[200005];
long long K;
map<long long,int> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;
    long long prefix = 0; // 누적합 prefix[i] = prefix[i-1] + arr[i]
    long long ans = 0; 
    
    mp[0] = 1;

    for(int i=1; i<=N; i++) {
        cin >> arr[i];
        prefix += arr[i];
        ans += mp[prefix-K]; // 이전에 등장한적 있으면 추가
        mp[prefix]++; // 구간합 저장
    }
    
    cout << ans;
    return 0;
}
