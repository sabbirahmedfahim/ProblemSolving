// starting : 2026-10-21 20:27:23
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define setbits(x) __builtin_popcountll(x)
#define endl '\n'
#define print(v) for(auto e : v) cout << e << " "; cout << endl;

const int N = 2e5 + 10, mod = 1e9 + 7;

void solve(int t) {
    int n; cin >> n ;
    vector<pair<int,int>> p(n);
    for(int i = 0; i < n; i++) {
        p[i].first = i + 1;
        cin >> p[i].second;
    }
    map <ld, set<pair<int,int>>> mpp;
    for(int i = 0; i < n ; i++) {
        for(int j = i + 1; j < n; j++) {
            ld k =(double) (p[j].second - p[i].second) / (double) (p[j].first - p[i].first) ;
            mpp[k].insert(p[i]);
            mpp[k].insert(p[j]);
        }
    }
    cerr << mpp.size() << endl;
    if(mpp.size() == n) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;//cin >> t;
    for(int i = 0; i < t; i++) {
        solve(i + 1);
    }
    return 0;
}
// Coded by Mahmudul Hasan Sakib (@mahmadulsakib2019)