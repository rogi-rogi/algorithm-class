#include <bits/stdc++.h>
using namespace std;

// 25.04.02 요세푸스 문제 복습 (큐)
int N,K;
queue<int> q;
vector<int> ans; // 결과 배열

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;

    for(int i=1; i<=N; i++) {
        q.push(i);
    } // 미리 넣기

    while(!q.empty()) {
        for(int i=0; i<K-1; i++) {
            q.push(q.front());
            q.pop();
        }
        ans.push_back(q.front());
        q.pop();
    }

    cout << "<";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        if(i !=ans.size()-1) {
            cout << ", ";
        }
    }
    cout << ">";

    
    return 0;

}
