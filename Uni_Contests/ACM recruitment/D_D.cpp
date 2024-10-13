// TLE on test 12
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);  

    int n;
    string s;
    cin >> n >> s;
    string temp = s;
    list<char> l;
    while (!s.empty())
    {
        l.push_back(s.back());
        s.pop_back();
    }
    reverse(l.begin(), l.end());

    int k = n - 1;
    while (k--)
    {
        int data = l.back();
        l.pop_back();
        l.push_front(data);
        string afterKCycle;
        for (auto data : l)
        {
            afterKCycle.push_back(data);
        }
        if (afterKCycle < temp)
        {
            cout << "No"; return 0;
        }
    }
    cout << "Yes";

    return 0;
}


// Wrong answer on test 6
// #include <bits/stdc++.h>
// #define ll long long int
// #define ull unsigned long long int
// #define nl '\n'
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false); 
//     cin.tie(NULL);  

//     int n;
//     string s;
//     cin >> n >> s;
//     bool flag = false;
//     char currentMx = s[0];
//     for (int i = 1; i < s.size(); i++)
//     {
//         if(s[i] < currentMx)
//         {
//             flag = true;
//         }
//     }
//     if(flag) cout << "No";
//     else cout << "Yes";

//     return 0;
// }