#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    string a, b; cin >> a >> b;

    string x = a, y = b; sort(all(x)); sort(all(y));

    if(x != y)
    {
        cout << "NO" << nl; return;
    }

    set<int> aPos, bPos, cPos;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 'a') aPos.insert(i);
        else if(a[i] == 'b') bPos.insert(i);
        else cPos.insert(i);
    }
    
    for (int i = 0; i < n; i++)
    {
        // cout << i << nl;

        if(a[i] == 'a') aPos.erase(i);
        else if(a[i] == 'b') bPos.erase(i);
        else cPos.erase(i);


        if(a[i] == b[i]) continue;

        if(a[i] == 'c')
        {
            cout << "NO" << nl; return;
        }

        if(a[i] == 'a')
        {
            if(b[i] == 'b')
            {
                if(bPos.empty())
                {
                    cout << "NO" << nl; return;
                }

                int nextB = *bPos.begin();
                int nextC = -1;
                if(!cPos.empty()) nextC = *cPos.begin();

                if(nextC == -1) 
                {
                    swap(a[i], a[nextB]);
                    bPos.erase(nextB);
                    aPos.insert(nextB);
                }
                else 
                {
                    if(nextC < nextB)
                    {
                        cout << "NO" << nl; return;
                    }
                    else 
                    {
                        swap(a[i], a[nextB]);
                        bPos.erase(nextB);
                        aPos.insert(nextB);
                    }
                }
            }
            else 
            {
                cout << "NO" << nl; return;
            }
        }
        else // a[i] == 'b'
        {
            if(b[i] == 'c')
            {
                if(cPos.empty())
                {
                    cout << "NO" << nl; return;
                }
    
                int nextC = *cPos.begin();
                int nextA = -1;
                if(!aPos.empty()) nextA = *aPos.begin();
    
                if(nextA == -1) 
                {
                    swap(a[i], a[nextC]);
                    cPos.erase(nextC);
                    bPos.insert(nextC);
                }
                else 
                {
                    if(nextA < nextC)
                    {
                        cout << "NO" << nl; return;
                    }
                    else 
                    {
                        swap(a[i], a[nextC]);
                        cPos.erase(nextC);
                        bPos.insert(nextC);
                    }
                }
            }
            else 
            {
                cout << "NO" << nl; return;
            }
        }

        // cout << a << nl << b << nl;
        // cout << "#" << nl;
    }

    cout << "YES" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}