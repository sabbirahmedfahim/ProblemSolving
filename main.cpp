#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ascci_storage;
    cin>>ascci_storage;

    int revLen = s.size() - 1;
    int flag = 0;
    int count_ascci = 0;
    for (int i = 0; i < s.size() / 2; i++, revLen--)
    {
        if (s[i] != s[revLen])
        {
            count_ascci = (int) (s[revLen] - s[i]);
        }
    }
    
    cout<<count_ascci;


    return 0;
}