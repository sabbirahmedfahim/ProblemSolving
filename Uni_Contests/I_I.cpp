#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    string s; cin >> s;
    for(auto data : s)
    {
        if(data >= 'A' && data <= 'Z') cout << (char) (data + 32);
        else if(data >= 'a' && data <= 'z') cout << (char) (data - 32);
        else cout << " ";
    }
    cout << nl;

    return 0;
}