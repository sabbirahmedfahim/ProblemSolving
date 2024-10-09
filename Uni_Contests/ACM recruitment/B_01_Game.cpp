#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int cnt_0 = 0, cnt_1 = 0;
        while (!s.empty())
        {
            if(s.back() == '0') cnt_0++;
            else cnt_1++;
            s.pop_back();
        }
        if(min(cnt_0, cnt_1)%2 != 0) cout << "DA" << nl;
        else cout << "NET" << nl;
    }

    return 0;
}