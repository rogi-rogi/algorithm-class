#include <bits/stdc++.h>
using namespace std;

// 25.04.05 제로 복습(스택)
int K;
stack<int> stk;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> K;
    while(K--) {
        int n;
        cin >> n;
        if(n!=0) {
            stk.push(n);
        }
        else {
            stk.pop();
        }
    }
    
    int ans= 0;
    while(!stk.empty()) {
        ans += stk.top();
        stk.pop();
    }

    cout << ans;
    return 0;
}




