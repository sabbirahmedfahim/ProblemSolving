// wrong approach
// #include <bits/stdc++.h>
// #define ll long long int
// #define ull unsigned long long int
// #define nl '\n'
// using namespace std;

// int main()
// {
//     int k, capacityOfG, capacityOfM; cin >> k >> capacityOfG >> capacityOfM;
//     int g = 0, m = capacityOfM;
//     // cout << 0 << " " << g << " " << m << nl;
//     for (int i = 1; i < k; i++)
//     {
//         // cout << i << " ";
//         if(i%2 != 0)
//         {
//             if(g == 0 && m >= capacityOfG)
//             {
//                 g = capacityOfG;
//                 m = m - capacityOfG;
//             }
//             else if(m < capacityOfG)
//             {
//                 g = m;
//                 m = 0;
//             }
//             // cout << g << " " << m << nl;
//         }
//         else
//         {
//             if(g == capacityOfG) g = 0;
//             else if(m == 0) m = capacityOfM;
//             // cout << g << " " << m << nl;
//         }
//     }
//     cout << g << " " << m;

//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int k, capacityOfG, capacityOfM;
    cin >> k >> capacityOfG >> capacityOfM;
    int g = 0, m = capacityOfM; // reduced single step by initializing values
    k--;
    for (int i = 1; i <= k; i++)
    {
        if(g == capacityOfG) g = 0;
        else if(m == 0) m = capacityOfM;
        else
        {
            int toFillGlass = min(capacityOfG - g, m);
            g += toFillGlass;
            m = m - toFillGlass; 
        }
    }
    cout << g << " " << m;

    return 0;
}