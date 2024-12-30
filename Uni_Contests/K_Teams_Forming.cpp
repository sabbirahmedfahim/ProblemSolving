#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; vector<int> v(n), remainingMembers; for(auto &data : v) cin >> data;
    sort(all(v));
    int team = 0, isFound = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(v[i] == v[i+1])
        {
            if(i+1 == n-1) isFound = 1;
            team++; i++; 
        }
        else remainingMembers.push_back(v[i]);
    }
    if(isFound == 0) remainingMembers.push_back(v.back());
    // print(remainingMembers);
    int need = 0;
    for (int i = 0; i < remainingMembers.size(); i += 2)
    {
        need += (remainingMembers[i+1] - remainingMembers[i]);
    }
    
    cout << need << nl;

    return 0;
}