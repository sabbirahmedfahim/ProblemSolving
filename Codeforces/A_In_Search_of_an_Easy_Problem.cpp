#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int n; cin >> n;
    bool flag = true;
    while (n--)
    {
        int data; cin >> data;
        if(data == 1) flag = false;
    }
    if(flag) cout << "EASY";
    else cout << "HARD";

    return 0;
}