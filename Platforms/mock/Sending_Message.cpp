#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, target;
    while (cin >> s && cin >> target)
    {
        ll freq_s[26] = {0};
        ll freq_t[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            freq_s[s[i]-'a']++;
        }
        for (int i = 0; i < target.size(); i++)
        {
            freq_t[target[i]-'a']++;
        }
        int idx_s = 0, idx_t = 0;
        int targetSz = target.size();
        while (idx_s < s.size() && idx_t < target.size())
        {
            if(s[idx_s] == target[idx_t]) idx_t++;
            idx_s++;
        }
        
        if(targetSz == idx_t ) cout << "Possible" << nl;
        else cout << "Impossible" << nl;
    }
    

    return 0;
}