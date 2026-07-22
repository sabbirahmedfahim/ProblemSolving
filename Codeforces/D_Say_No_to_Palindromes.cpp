#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
abc
acb
bac
bca
cab
cba
*/
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, q; cin >> n >> q;
    string s; cin >> s;

    string abc, acb, bac, bca, cab, cba;
    
    string curr = "abc"; int idx = 0;
    for (int i = 0; i < n; i++)
    {
        idx %= 3; abc.push_back(curr[idx++]);
    }
    curr = "acb"; idx = 0;
    for (int i = 0; i < n; i++)
    {
        idx %= 3; acb.push_back(curr[idx++]);
    }
    curr = "bac"; idx = 0;
    for (int i = 0; i < n; i++)
    {
        idx %= 3; bac.push_back(curr[idx++]);
    }
    curr = "bca"; idx = 0;
    for (int i = 0; i < n; i++)
    {
        idx %= 3; bca.push_back(curr[idx++]);
    }
    curr = "cab"; idx = 0;
    for (int i = 0; i < n; i++)
    {
        idx %= 3; cab.push_back(curr[idx++]);
    }
    curr = "cba"; idx = 0;
    for (int i = 0; i < n; i++)
    {
        idx %= 3; cba.push_back(curr[idx++]);
    }

    // print(abc); print(acb); print(bac); print(bca); print(cab); print(cba);
    vector<int> prefABC(n), prefACB(n), prefBAC(n), prefBCA(n), prefCAB(n), prefCBA(n);
    prefABC[0] += (s[0] != abc[0]);
    prefACB[0] += (s[0] != acb[0]);
    prefBAC[0] += (s[0] != bac[0]);
    prefBCA[0] += (s[0] != bca[0]);
    prefCAB[0] += (s[0] != cab[0]);
    prefCBA[0] += (s[0] != cba[0]);
    
    for (int i = 1; i < n; i++)
    {
        prefABC[i] += prefABC[i - 1] + (s[i] != abc[i]);
        prefACB[i] += prefACB[i - 1] + (s[i] != acb[i]);
        prefBAC[i] += prefBAC[i - 1] + (s[i] != bac[i]);
        prefBCA[i] += prefBCA[i - 1] + (s[i] != bca[i]);
        prefCAB[i] += prefCAB[i - 1] + (s[i] != cab[i]);
        prefCBA[i] += prefCBA[i - 1] + (s[i] != cba[i]);
    }

    // print(prefABC);
    // print(prefACB);
    // print(prefBAC);
    // print(prefBCA);
    // print(prefCAB);
    // print(prefCBA);
    
    while (q--)
    {
        int l, r; cin >> l >> r; l--, r--;

        vector<int> ans; 
        if(l == 0)
        {
            ans.push_back(prefABC[r]);
            ans.push_back(prefACB[r]);
            ans.push_back(prefBAC[r]);
            ans.push_back(prefBCA[r]);
            ans.push_back(prefCAB[r]);
            ans.push_back(prefCBA[r]);
        }
        else 
        {
            ans.push_back(prefABC[r] - prefABC[l - 1]);
            ans.push_back(prefACB[r] - prefACB[l - 1]);
            ans.push_back(prefBAC[r] - prefBAC[l - 1]);
            ans.push_back(prefBCA[r] - prefBCA[l - 1]);
            ans.push_back(prefCAB[r] - prefCAB[l - 1]);
            ans.push_back(prefCBA[r] - prefCBA[l - 1]);
        }

        cout << *min_element(all(ans)) << nl;
    }

    return 0;
}