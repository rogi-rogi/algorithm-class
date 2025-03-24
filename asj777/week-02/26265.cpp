#include <bits/stdc++.h>
using namespace std;

// 25.03.24 멘토와 멘티
int N;
vector<pair<string,string>> v;
bool compare(const pair<string,string> &a ,const pair<string,string> &b) {
    if(a.first == b.first) {
        return a.second>b.second;
    }
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i=0; i<N; i++) {
        string mento,menti;
        cin >> mento >> menti;
        v.push_back({mento,menti});
    }
    
    sort(v.begin(),v.end(),compare);
    for (auto mem: v) {
        cout << mem.first << " " << mem.second << "\n";
    }
    return 0;
}
