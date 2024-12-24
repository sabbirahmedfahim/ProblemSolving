// resolved [REAd the editorial. It's easier to implement if you understand the pattern]
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> v(n); for(auto &data: v) cin >> data;
    vector<int> a = v, b = v;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            a[i] = 1; break;
        }
    }
    
    for (int i = n-1; i >=0 ; i--)
    {
        if(b[i] == 1)
        {
            b[i] = 0; break;
        }
    }
    
    int mx = 0, cnt = 0;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(v[i] == 1 && v[j] == 0) cnt++;
        }
    }
    mx = cnt;
    cnt = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i] == 1 && a[j] == 0) cnt++;
        }
    }
    mx = max(mx, cnt);
    cnt = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(b[i] == 1 && b[j] == 0) cnt++;
        }
    }
    mx = max(mx, cnt);

    cout << mx << nl;
}
void solve2()
{
    int n; cin >> n; vector<int> v(n); for(auto &data: v) cin >> data;
    vector<int> a = v, b = v;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            a[i] = 1; break;
        }
    }
    
    for (int i = n-1; i >=0 ; i--)
    {
        if(b[i] == 1)
        {
            b[i] = 0; break;
        }
    }

    ll mx = 0, cnt = 0;
    int zero = 0, one = 0;
    bool isFound = false;
    for(auto data : v) 
    {
        if(data == 1) 
        {
            one++; isFound = true;
        }
        else if(isFound && data == 0) zero++;
    }
    isFound = false;
    for(auto data : v) 
    {
        if(zero == 0) break;
        if(data == 1)
        {
            isFound = true; cnt += zero;
        }
        else if(isFound) zero--;
    }
    mx = max(mx, cnt);
    cnt = 0;

    zero = 0, one = 0, cnt = 0; isFound = false;
    for(auto data : a)
    {
        if(data == 1) 
        {
            one++; isFound = true;
        }
        else if(isFound && data == 0) zero++;
    }
    isFound = false;
    for(auto data : a) 
    {
        if(zero == 0) break;
        if(data == 1)
        {
            isFound = true; cnt += zero;
        }
        else if(isFound) zero--;
    }
    mx = max(mx, cnt);
    cnt = 0;

    zero = 0, one = 0, cnt = 0; isFound = false;
    for(auto data : b)
    {
        if(data == 1) 
        {
            one++; isFound = true;
        }
        else if(isFound && data == 0) zero++;
    } 
    isFound = false;
    for(auto data : b) 
    {
        if(zero == 0) break;
        if(data == 1)
        {
            isFound = true; cnt += zero;
        }
        else if(isFound) zero--;
    }
    mx = max(mx, cnt);
    
    cout << mx << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve2();

    return 0;
}