#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    string s;
    // cin >> s; // wrong
    getline(cin, s);
    int freq[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            freq[s[i] - 'a']++;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
            cnt++;
    }
    cout << cnt;

    return 0;
}