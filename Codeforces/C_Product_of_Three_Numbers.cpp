#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    int realN = n;

    map<int, int> primeFact;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            primeFact[i]++;
            n /= i;
        }
    }
    if(n > 1) primeFact[n]++;
    
    // for(auto [x, y] : primeFact)
    // {
    //     cout << x << " --> " << y << nl;
    // }
    // cout<< nl;

    if(primeFact.size() == 1) // let, ok
    {
        int a, b, c;
        for(auto &[x, y] : primeFact)
        {
            if(y < 6)
            {
                cout << "NO" << nl;
                return;
            }
            a = x; b = a + a;
            c = realN / (a * b);
        }

        set<int> st;
        st.insert(a); st.insert(b); st.insert(c);
        if(st.count(1) || (a * b * c) != realN || st.size() < 3)
        {
            cout << "NO" << nl;
            return;
        }

        cout << "YES" << nl;
        cout << a << " " << b << " " << c << nl;
    }
    else if(primeFact.size() == 2)
    {
        int a = -1, b = -1, c = -1; 
        for(auto &[x, y] : primeFact)
        {
            if(a == -1) a = x;
            else if(b == -1) b = x;
            else break;
        }
        c = realN / (a * b);

        set<int> st;
        st.insert(a); st.insert(b); st.insert(c);

        if((a * b * c) != realN || st.count(1) || st.size() < 3) cout << "NO" << nl;
        else 
        {
            cout << "YES" << nl;
            cout << a << " " << b << " " << c << nl;
        }
    }
    else // let, ok
    {
        int a = -1, b = -1, c = -1; 
        for(auto &[x, y] : primeFact)
        {
            if(a == -1) a = x;
            else if(b == -1) b = x;
            else break;
        }
        c = realN / (a * b);

        set<int> st;
        st.insert(a); st.insert(b); st.insert(c);
        if((a * b * c) != realN || st.count(1) || st.size() < 3)
        {
            cout << "NO" << nl; return;
        }

        cout << "YES" << nl;
        cout << a << " " << b << " " << c << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}