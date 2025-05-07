#include <bits/stdc++.h>
using namespace std;

// 25.04.02 후위 표기식2 복습(스택)
int N;
map<char,double> mp;
string str;
stack<double> stk;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);


    cin >> N;

    cin >> str;

    for(int i=0; i<N; i++) {
        double val;
        cin >> val;
        mp['A'+ i] = val;
    }

    for(int i=0; i<str.length(); i++) {
        if(str[i] >='A'&& str[i]<='Z') {
            stk.push(mp[str[i]]);
        }
        else {
            double b = stk.top(); stk.pop();
            double a = stk.top(); stk.pop();

            if(str[i]=='+') {
                stk.push(a+b);
            }
            else if(str[i]=='-') {
                stk.push(a-b);
            }
            else if(str[i]=='*') {
                stk.push(a*b);
            }
            else if(str[i]=='/') {
                stk.push(a/b);
            }
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << stk.top();

    return 0;

}

