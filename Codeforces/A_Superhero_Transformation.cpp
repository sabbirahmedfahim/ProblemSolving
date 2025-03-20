#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string x, y; cin >> x >> y;
    
    if(x.size() != y.size())
    {
        cout << "No" << nl; return 0;
    }

    for (int i = 0; i < min(x.size(), y.size()); i++)
    {
        if(isVowel(x[i]) != isVowel(y[i]))
        {
            cout << "No" << nl; return 0;
        }
    }
    
    cout << "Yes" << nl;

    return 0;
}