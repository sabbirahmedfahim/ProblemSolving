#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int revLen = s.size() - 1;
    int flag = 0;
    for (int i = 0; i < s.size() / 2; i++, revLen--)
    {
        if (s[i] != s[revLen])
        {
            flag = 1;
        }
    }
    
    cout<<flag;


    return 0;
}