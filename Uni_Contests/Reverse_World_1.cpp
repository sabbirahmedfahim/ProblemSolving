#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s; getline(cin, s);

    stringstream ss(s);
    string word;
    vector<string> res;

    while (ss >> word)
    {
        res.push_back(word);
    }
    // print(res);
    reverse(all(res));

    for (int i = 0; i < res.size()-1; i++)
    {
        cout << res[i] << " ";
    }
    cout << res.back();

    return 0;
}