#include <bits/stdc++.h>
using namespace std;

// 25.04.07 안정적인 문자열 (스택)
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int num = 1;
    while(1) {
        stack<char> stk;
        cin >> str;
        if(str[0]=='-') break;
        int cnt = 0; // 최소 연산 횟수
        for(char ch : str) {
            if(ch=='{') {
                stk.push(ch);
            }
            else {
                if(!stk.empty()&&stk.top()=='{') {
                    stk.pop();
                }
                else {
                    stk.push('{');
                    cnt++;
                }
            }
        }

        cnt += stk.size()/2;
        cout << num << ". " << cnt << "\n";
        
        num++;
    }
    return 0;
}




