#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    int aAche = count(all(s), 'a'), bAche = count(all(s), 'b');

    if(aAche == bAche)
    {
        cout << 0 << nl; return;
    }
    if(aAche == 0 || bAche == 0)
    {
        cout << -1 << nl; return;
    }

    vector<int> res;

    // left theke erase korbo
    int tot_erase = 0;
    for (int i = 0; i < n; i++)
    {
        tot_erase++;
        if(s[i] == 'a') aAche--;
        else bAche--;

        if(aAche == bAche && aAche != 0) 
        {
            res.push_back(tot_erase); break;
        }
    }

    // right theke erase korbo
    tot_erase = 0;
    aAche = count(all(s), 'a'), bAche = count(all(s), 'b');
    for (int i = n - 1; i >= 0; i--)
    {
        tot_erase++;
        if(s[i] == 'a') aAche--;
        else bAche--;
        if(aAche == bAche && aAche != 0) 
        {
            res.push_back(tot_erase); break;
        }
    }

    // left and right theke nibo
    int curr_a = 0, curr_b = 0;
    int leftThekePaisi = -1, rightThekePaisi = -1;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'a') curr_a++;
        else curr_b++;
 
        if(curr_a == curr_b) leftThekePaisi = i + 1;
    }
    curr_a = 0, curr_b = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if(i + 1 == leftThekePaisi) break;
 
        if(s[i] == 'a') curr_a++;
        else curr_b++;
 
        if(curr_a == curr_b) rightThekePaisi = n - i;
    }
    
    if(leftThekePaisi != -1 && rightThekePaisi != -1)
    {
        res.push_back(n - (leftThekePaisi + rightThekePaisi));
    }

    sort(all(res));

    if(res.empty()) cout << -1 << nl;
    else if(res.back() == n) 
    {
        while (1)
        {
            ;
        }
        
    }
    else cout << res[0] << nl;
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