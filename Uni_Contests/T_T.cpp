#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const int N = 1E6;
bool comp[N+1] = {0}; 
vector<int> primeList;
map<int, int> mp;
int n;
void solve()
{
    for (int i = 0; i < primeList.size(); i++)
    {
        int data = primeList[i];
        if(mp.count(n-data))
        {
            cout << n << " = " << data << " + " << n-data << nl; return;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    comp[1] = true;

    for (int i = 2; i <= N; i++)
    {
        if(comp[i]) continue;
        primeList.push_back(i);
        for (int j = i+i; j < N; j+=i)
        {
            comp[j] = true;
        }
    }

    for(auto data : primeList) mp[data]++;

    while (1)
    {
        cin >> n; if(n == 0) return 0;
        solve();
    }
    

    return 0;
}