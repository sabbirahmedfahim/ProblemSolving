// youtube
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
void solve()
{
    string s, target;
    cin >> s >> target;

    map<char, int> m1, m2; // map is key-value pair // char-> key ## int-> value
    // for(auto ch : s) cout << ch << " ";
    cout << nl;
    for (auto ch : s) m1[ch]++;
    for (auto ch : target) m2[ch]++;

    int i = 0, j = 0;
    while (i < s.size() && j < target.size())
    {
        if (s[i] == target[j])
        {
            if (m1[s[i]] < m2[target[j]]) break; // if the frequency of target is higher, that means the ans is "NO"
            if (m1[s[i]] == m2[target[j]])
            {
                // match!
                m2[target[j]]--; // decresase the frequency of our target
                j++; // if target is found and it's frequency matched the condition, go to next target
            }
        }
        m1[s[i]]--; // descresing from freqency array, i mean set
        i++; // s always increases
    }

    if (j == target.size()) // j reachs the target size means the target is found and conditions are matched
        cout << "YES" << nl;
    else
        cout << "NO" << nl;

    // my approach
    // string s, target;
    // cin >> s >> target;
    // int freq_s[26] = {0};
    // int freq_t[26] = {0};
    // for (int i = 0; i < s.size(); i++)
    // {
    //     freq_s[s[i] - 'A']++;
    // }
    // for (int i = 0; i < target.size(); i++)
    // {
    //     freq_t[target[i] - 'A']++;
    // }
    // for (int i = 0; i < 26; i++)
    // {
    //     if (freq_s[i] < freq_t[i])
    //     {
    //         cout << "NO" << nl;
    //         return;
    //     }
    // }
    // while (true)
    // {
    //     if(s[i])
    // }

    // if(ans == target) cout << "YES" << nl;
    // else cout << "NO" << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int target;
    cin >> target;
    while (target--) solve();

    return 0;
}
