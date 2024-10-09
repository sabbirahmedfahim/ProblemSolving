#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    string s; cin >> s;

    int cnt = 0;
    int cnt_6 = 0, cnt_9 = 0, cnt_3 = 0, cnt_E = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '4' || s[i] == '7' || s[i] == 'A' || s[i] == 'b' || s[i] == 'C' || s[i] == 'd' || s[i] == 'F')
        {
            cnt++;
        }
        else if(s[i] == '6') cnt_6++; else if(s[i] == '9') cnt_9++;
        else if(s[i] == '3') cnt_3++; else if(s[i] == 'E') cnt_E++;
    }
    int _3_E_laghbe = 0;
    if(cnt_3 > 0 || cnt_E > 0) _3_E_laghbe = abs(cnt_3-cnt_E);
    int _6_9_laghbe = 0;
    if(cnt_3 > 0 || cnt_E > 0) _6_9_laghbe = abs(cnt_6-cnt_9);

    cout << cnt + _3_E_laghbe + _6_9_laghbe;


    return 0;
}