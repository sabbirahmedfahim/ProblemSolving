#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
bool canWePlace(vector<int> a, string have, string need, int mid)
{
    vector<int> tmp = a;
    deque<char> dq; for(auto e : need) dq.push_back(e);
    for (int i = 0; i < mid; i++)
    {
        if(i < mid) have[tmp[i]] = '0';
    }

    // print(have);

    for (int i = 0; i < have.size(); i++)
    {
        if(have[i] == dq.front()) dq.pop_front();
        if(dq.empty()) return true;
    }
    
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string t, p; cin >> t >> p;

    int n = t.size();
    vector<int> a(n); 
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i]; a[i]--; // 0-based index
    }


    int l = 0, r = n-1; int candidateAns = -1;
    while (l <= r)
    {
        int mid = l + (r-l)/2;
        if(canWePlace(a, t, p, mid)) 
        {
            candidateAns = mid; l = mid + 1;
        }
        else r = mid - 1;
    }
    
    cout << candidateAns << nl;

    return 0;
}