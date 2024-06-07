#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int cnt = 0;

    while (ss >> word)
    {
        for (int i = 0; i < word.size(); i++)
        {
            if (isalpha(word[i]) && !isalpha(word[i + 1]))
            {
                cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}