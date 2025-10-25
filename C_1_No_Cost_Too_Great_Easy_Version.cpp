// my approach was right, just fixed the mathematical tiny calc & YYYYYYYEeeeeessss
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e; // hudai

    // sort(all(a));
    set<int> divisors1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j*j <= a[i]; j++)
        {
            if(a[i] % j == 0) 
            {
                if(divisors1.count(j) || divisors1.count(a[i] / j))
                {
                    cout << 0 << nl; return;
                }
            }
        }
        if(divisors1.count(a[i]))
        {
            cout << 0 << nl; return;
        }

        for (int j = 2; j*j <= a[i]; j++)
        {
            if(a[i] % j == 0) 
            {
                int x = j, y = a[i] / j;
                divisors1.insert(x);
                if(x != y && y > 1) divisors1.insert(y);
            }
        }
        if(a[i] != 1) divisors1.insert(a[i]);
    }
    
    // cout << "Have Answer" << nl;

    int odds = 0, evens = 0;
    for(auto e : a)
    {
        if(e & 1) odds++;
        else evens++;
    }

    if(evens >= 2) 
    {
        cout << 0 << nl; return;
    }
    else if(evens >= 1)
    {
        cout << 1 << nl; return;
    }
    else 
    {
        map<int, int> divisors2;

        for (int i = 0; i < n; i++)
        {
            for (int j = 2; j * j <= a[i]; j++)
            {
                if(a[i] % j == 0) 
                {
                    int x = j, y = a[i]/j;
                    divisors2[x]++;
                    if(x != y && y > 1) divisors2[y]++;
                }
            }
            if(a[i] != 1) divisors2[a[i]]++;
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 2; j * j <= a[i]; j++) // remove divisors of a[i]
            {
                if(a[i] % j == 0) 
                {
                    int x = j, y = a[i]/j;
                    divisors2[j]--;
                    if(divisors2[j] == 0) divisors2.erase(j);

                    if(x != y && y > 1)
                    {
                        divisors2[y]--;
                        if(divisors2[y] == 0) divisors2.erase(y);
                    }
                }
            }
            divisors2[a[i]]--;
            if(divisors2[a[i]] == 0) divisors2.erase(a[i]); // remove

            // check pos div match
            int data = a[i] + 1;
            for (int j = 2; j * j <= data; j++)
            {
                if(data % j == 0 && (divisors2.count(j) || divisors2.count(data / j)))
                {
                    cout << 1 << nl; return;
                }
            }
            if(divisors2.count(data))
            {
                cout << 1 << nl; return;
            }

            for (int j = 2; j * j <= a[i]; j++) // restore divisors
            {
                if(a[i] % j == 0) 
                {
                    int x = j, y = a[i]/j;
                    divisors2[x]++;
                    if(x != y && y > 1)
                    {
                        divisors2[y]++;
                    }
                }
            }
            if(a[i] != 1) divisors2[a[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 2; j * j <= a[i]; j++)
            {
                if(a[i] % j == 0) divisors2[j]++;
            }
            if(a[i] != 1) divisors2[a[i]]++;
        }
        
        cout << 2 << nl;
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