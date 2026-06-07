#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;
    int n = s.size();

    deque<char> dq, x;
    string ss = "happiness"; // len == 9
    for(auto e : ss) x.push_back(e);
    
    // print(x);
    
    int cnt = 0;

    int l = - 1, r = -1, L = -1, R = -1;
    for (int i = 0; i < n; i++)
    {
        dq.push_back(s[i]);

        if(dq.size() > x.size()) dq.pop_front();

        if(dq == x) 
        {
            // print(dq);
            cnt++;
            if(l == -1) 
            {
                l = i - 4 + 1;
                // cerr << s[i - 4] << nl;
                r = i + 1;
            }
            else 
            {
                L = i - 4 + 1;
                R = i + 1;
            }
        }

        if(cnt >= 3)
        {
            cout << "NO" << nl; return;
        }
    }

    if(cnt == 2)
    {
        cout << "YES" << nl;
        cout << r - 7 << " " << R << nl;
        return;
    }
    

    if(cnt == 0)
    {
        cout << "YES" << nl;
        if(s.size() < x.size())
        {
            cout << "1 2" << nl; return;
        }
        
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < s.size(); j++)
            {
                if(i == j) continue;

                swap(s[i], s[j]);
                bool paisi = false;
                dq.clear();
                for (int k = 0; k < s.size(); k++)
                {
                    dq.push_back(s[k]);
                    if(dq.size() > x.size()) dq.pop_front();

                    if(dq == x)
                    {
                        paisi = true; break;
                    }
                }
                
                if(paisi == false)
                {
                    cout << i + 1 << " " << j + 1 << nl;
                    return;
                }

                swap(s[i], s[j]);
            }
        }

        while (1)
        {
            ;
        }
        
        
    }

    // cnt == 1
    if(cnt == 1)
    {
        cout << "YES" << nl;
        // cerr << s[l - 1 - 3] << " " << s[r - 1] << nl;
        cout << r - 7 << " " << r << nl;
        return;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}