#include <bits/stdc++.h>
using namespace std;
// 25.05.04 문제 추천 시스템 Version 1(복습)
int N,M;
map<int,int> mp; // 문제번호 -> 난이도
set<pair<int,int>> st; // 난이도, 문제 번호

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    while(N--) {
        int P,L;
        cin >> P >> L;
        mp[P] =L;
        st.insert({L,P});
    }
    
    cin >> M;
    while(M--) {
        string query;
        cin >> query;
        if(query == "add") {
            int P,L;
            cin >> P >> L;
            mp[P] = L;
            st.insert({L,P});
        }
        else if(query == "solved") {
            int P;
            cin >> P;
            int L = mp[P];
            mp.erase(P);
            st.erase({L,P});
        }
        else if(query == "recommend") {
            int x;
            cin >> x;
            if(x==1) {
                auto it = --st.end();
                cout << it->second << "\n";
            }
            else if(x==-1) {
                auto it = st.begin();
                cout << it->second << "\n";
            }
        }
    }
    return 0;
}
