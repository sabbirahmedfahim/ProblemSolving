#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
string longestPalindrome(string s) {

    string t = "@";

    for (char c : s) {

        t += '#';

        t += c;

    }

    t += "#$";

    int n = t.size();

    vector<int> p(n);

    int center = 0, right = 0;

    int bestCenter = 0, bestLen = 0;

    for (int i = 1; i < n - 1; i++) {

        int mirror = 2 * center - i;

        if (i < right)

            p[i] = min(right - i, p[mirror]);

        while (t[i + p[i] + 1] == t[i - p[i] - 1])

            p[i]++;

        if (i + p[i] > right) {

            center = i;

            right = i + p[i];

        }

        if (p[i] > bestLen) {

            bestLen = p[i];

            bestCenter = i;

        }

    }

    int start = (bestCenter - bestLen) / 2;

    return s.substr(start, bestLen);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s; cin >> s;
    cout << longestPalindrome(s) << nl;

    return 0;
}