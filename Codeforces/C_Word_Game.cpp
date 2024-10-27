#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    map<string, int> mp, mp1, mp2, mp3;
    int temp1 = n, temp2 = n, temp3 = n;
    while (temp1--)
    {
        string s; cin >> s; mp1[s]++; mp[s]++;
    }
    while (temp2--)
    {
        string s; cin >> s; mp2[s]++; mp[s]++;
    }
    while (temp3--)
    {
        string s; cin >> s; mp3[s]++; mp[s]++;
    }
    int one = 0, two = 0, three = 0;
    for(auto it : mp) 
    {
        if(mp1.find(it.first) != mp1.end() && mp2.find(it.first) == mp2.end() && mp3.find(it.first) == mp3.end()) one += 3;
        else if(mp1.find(it.first) == mp1.end() && mp2.find(it.first) != mp2.end() && mp3.find(it.first) == mp3.end()) two += 3;
        else if(mp1.find(it.first) == mp1.end() && mp2.find(it.first) == mp2.end() && mp3.find(it.first) != mp3.end()) three += 3;
        else if(mp1.find(it.first) != mp1.end() && mp2.find(it.first) != mp2.end() && mp3.find(it.first) == mp3.end()) 
        {
            one++, two++;
        }
        else if(mp1.find(it.first) != mp1.end() && mp2.find(it.first) == mp2.end() && mp3.find(it.first) != mp3.end()) 
        {
            one++, three++;
        }
        else if(mp1.find(it.first) == mp1.end() && mp2.find(it.first) != mp2.end() && mp3.find(it.first) != mp3.end()) 
        {
            two++, three++;
        }
    }
    cout << one << " " << two << " " << three << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}