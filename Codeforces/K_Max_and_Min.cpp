#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    set<int> s;
    for (int i = 0; i < 3; i++)
    {
        int data; cin >> data; s.insert(data);
    }
    
    cout << *s.begin() << " " << *--s.end() << nl;

    return 0;
}