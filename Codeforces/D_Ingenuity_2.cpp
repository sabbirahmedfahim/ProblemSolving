#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    if(n%2)
    {
        cout << "NO" << nl; return;
    }

    deque<int> E, W, N, S;
    deque<char> ans(n, '0');
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'E') E.push_back(i);
        if(s[i] == 'W') W.push_back(i);
        if(s[i] == 'N') N.push_back(i);
        if(s[i] == 'S') S.push_back(i);
    }
    
    bool rovers_turn = true; int sz = 0;
    while (!E.empty() && !W.empty())
    {
        if(rovers_turn) 
        {
            ans[E.front()] = 'R';
            ans[W.front()] = 'R';
        }
        else 
        {
            ans[E.front()] = 'H';
            ans[W.front()] = 'H';
        }
        rovers_turn = !rovers_turn;
        E.pop_front(); W.pop_front();
        sz += 2;
    }
    // rovers_turn = true; // illogical
    while (!N.empty() && !S.empty())
    {
        if(rovers_turn) 
        {
            ans[N.front()] = 'R';
            ans[S.front()] = 'R'; 
        }
        else 
        {
            ans[N.front()] = 'H';
            ans[S.front()] = 'H';
        }
        rovers_turn = !rovers_turn;
        N.pop_front(); S.pop_front();
        sz += 2;
    }

    bool isFound = false;
    for(auto data : ans) 
    {
        if(data == 'H') isFound = true;
    }
    if(s.size() == 2 && s.size() == sz && !isFound)
    {
        cout << "NO" << nl; return;
    }

    // cout << E.size() << " " << W.size() << " " << N.size() << " " << S.size() << nl;
    if(E.size()%2 || W.size()%2 || N.size()%2 || S.size()%2)
    {
        cout << "NO" << nl; return;
    }

    rovers_turn = false;
    if(!E.empty())
    {
        for (int i = 0; i < E.size(); i++)
        {
            if(rovers_turn) ans[E[i]] = 'R';
            else ans[E[i]] = 'H';
            rovers_turn =! rovers_turn;
        }
    }
    if(!W.empty())
    {
        for (int i = 0; i < W.size(); i++)
        {
            if(rovers_turn) ans[W[i]] = 'R';
            else ans[W[i]] = 'H';
            rovers_turn =! rovers_turn;
        }
    }
    if(!N.empty())
    {
        for (int i = 0; i < N.size(); i++)
        {
            if(rovers_turn) ans[N[i]] = 'R';
            else ans[N[i]] = 'H';
            rovers_turn =! rovers_turn;
        }
    }
    // for(auto data : S) cout << data << " ";
    if(!S.empty())
    {
        for (int i = 0; i < S.size(); i++)
        {
            // cout << i << " -> " << S[i] << nl;
            if(rovers_turn) ans[S[i]] = 'R';
            else ans[S[i]] = 'H';
            rovers_turn = !rovers_turn;
        }
    }

    // for(auto data : extra) cout << data; cout << " -> ";
    for(auto data : ans) cout << data; cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}