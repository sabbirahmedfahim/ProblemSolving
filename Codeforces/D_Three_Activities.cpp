#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
a b c
a c b
b a c
b c a
c a b
c b a
*/
bool cmp(pair<int, int> x, pair<int, int> y)
{
    return x.first > y.first;
}
ll getRes(vector<pair<int, int>> ii, vector<pair<int, int>> jj, vector<pair<int, int>> kk)
{
    ll sum = 0, tot_sum = 0;
    int one, two, three;
    one = ii[0].second, sum += ii[0].first; // one updated
    for (int i = 0; i < ii.size(); i++)
    {
        if(jj[i].second != one) 
        {
            two = jj[i].second; sum += jj[i].first; break;
        }
    }
    for (int i = 0; i < ii.size(); i++)
    {
        if(kk[i].second != one && kk[i].second != two) 
        {
            sum += kk[i].first; three = kk[i].second; break;
        }
    }
    return sum;
}
void solve()
{
    int n; cin >> n;
    vector<pair<int, int>> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i].first;
        b[i].second = i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i].first;
        c[i].second = i;
    }
    sort(all(a), cmp);
    sort(all(b), cmp);
    sort(all(c), cmp);
    // for(auto [x, y] : c) cout << x << " " << y << nl;

    
    vector<ll> answers;
    answers.push_back(getRes(a, b, c));
    answers.push_back(getRes(a, c, b));
    answers.push_back(getRes(b, a, c));
    answers.push_back(getRes(b, c, a));
    answers.push_back(getRes(c, a, b));
    answers.push_back(getRes(c, b, a));

    sort(all(answers)); reverse(all(answers));

    cout << answers[0] << nl;
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
