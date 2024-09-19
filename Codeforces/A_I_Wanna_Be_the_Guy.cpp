#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;

    int freq[105] = {0};
    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        int data;
        cin >> data;
        freq[data]++;
    }
    int y;
    cin >> y;
    for (int i = 1; i <= y; i++)
    {
        int data;
        cin >> data;
        freq[data]++;
    }

    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        if (freq[i] == 0)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "Oh, my keyboard!";
    else
        cout << "I become the guy.";

    return 0;
}