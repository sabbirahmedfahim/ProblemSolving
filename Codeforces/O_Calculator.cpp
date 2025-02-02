#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s; cin >> s;

    char op; string beg, end;

    bool prev = true;
    for(auto data : s)
    {
        if(data == '+' || data == '-' || data == '*' || data == '/')
        {
            op = data; prev = false; continue;
        }
        if(prev) beg += data;
        else end += data;
    }

    if(op == '+') cout << stoi(beg) + stoi(end) << nl;
    else if(op == '-') cout << stoi(beg) - stoi(end) << nl;
    else if(op == '*') cout << stoi(beg) * stoi(end) << nl;
    else cout << stoi(beg) / stoi(end) << nl;

    return 0;
}