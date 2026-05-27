#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    string chef, chefina; cin >> chef >> chefina;
    int chef_points = 0, chefina_points = 0;
    for (int i = 0; i < n; i++)
    {
        if(chef[i] == 'R' && chefina[i] == 'S' || chef[i] == 'S' && chefina[i] == 'P'
        || chef[i] == 'P' && chefina[i] == 'R') chef_points++;
        if(chefina[i] == 'R' && chef[i] == 'S' || chefina[i] == 'S' && chef[i] == 'P'
        || chefina[i] == 'P' && chef[i] == 'R') chefina_points++;
    }
    if(chef_points > chefina_points) cout << 0 << nl;
    else if(chef_points == chefina_points) cout << 1 << nl;
    else cout << (chefina_points - chef_points)/2 + 1 << nl; // do not understand
}   
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}