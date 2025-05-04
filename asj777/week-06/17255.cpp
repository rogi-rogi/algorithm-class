#include <bits/stdc++.h>
using namespace std;
// 25.05.02 N으로 만들기 - 백트래킹
string N;
map<set<string>,int> mp;

void solve(int left,int right, string cur, set<string>stmp) {
    if(cur==N) {
        mp[stmp] = 1;
        return;
    }
    if(left>0) {
        string nxt = N[left-1]+cur;
        stmp.insert(nxt);
        solve(left-1,right,nxt,stmp);
        stmp.erase(nxt);
    }
    if(right+1<N.length()) {
        string nxt = cur+N[right+1];
        stmp.insert(nxt);
        solve(left,right+1,nxt,stmp);
        stmp.erase(nxt);
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i=0; i<N.length(); i++) {
        string tmp = N.substr(i,1);
        set<string> st = {tmp};
        solve(i,i,tmp,st);
    }
    
    cout << mp.size();
    return 0;
}
