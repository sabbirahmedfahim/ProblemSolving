#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n ;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;
        s.insert(data);
    }
    cout << s.size() << nl;
    
    return 0;
}