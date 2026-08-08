#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // int n = 7;
    // for (int i = 1; i <= 100000; i++)
    // {
    //     int data = i * 7;

    //     string s = to_string(data);
    //     // cout << s << ' ';
    //     set<char> st = {'1', '8', '6', '9'}, currSt;

    //     for(auto e : s)
    //     {
    //         if(e == '1' || e == '8' || e == '6' || e == '9') currSt.insert(e);
    //     }

    //     if(st == currSt) cout << s << ' ';
    // }

    cout << 1869 % 7 << nl;
    cout << 18690 % 7 << nl;
    cout << 18691 % 7 << nl;
    cout << 18692 % 7 << nl;
    cout << 18693 % 7 << nl;
    cout << 41869 % 7 << nl;
    cout << 51869 % 7 << nl;
    

    return 0;
}