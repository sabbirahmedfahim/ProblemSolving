#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int cntA = 0, cntD = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'A') cntA++;
        else cntD++;
    }
    if(cntA > cntD) cout << "Anton" << nl;
    else if (cntA < cntD) cout << "Danik" << nl;
    else cout << "Friendship" << nl;

    return 0;
}