#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
ll n;
ll cnt = 0;
bool knapsack(ll data)
{
    if (data == 1) 
    {
        return true;
    }
    // if(data > n) return false;
    if (data%6 == 0)
    {
        cnt++;
        return knapsack(data/6);
        // ll op1 = knapsack(data / 6);
        // ll op2 = knapsack(data * 2);
        // return op1 || op2;
    }
    else if(data%3==0) // do not understand the logic behind the condition
    {
        cnt++;
        return knapsack(data * 2);
    }
    // else
    //     return knapsack(data * 2);
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cnt = 0;
        cin >> n;
        if (knapsack(n)) cout << cnt << nl;
        else cout << -1 << nl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// #define ll long long int
// #define nl '\n'
// using namespace std;

// bool knapsack(ll data) {
//     if (data == 1) return true;  // Base case: if data is 1, it's possible

//     if (data % 6 == 0) {
//         // Try dividing by 6 if divisible
//         return knapsack(data / 6);
//     } else if (data % 3 == 0) {
//         // Try multiplying by 2 if divisible by 3 but not by 6
//         return knapsack(data * 2);
//     }

//     return false;  // If it's not divisible by 6 or 3, it's impossible
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         ll n;
//         cin >> n;
        
//         if (knapsack(n)) {
//             cout << "YES" << nl;
//         } else {
//             cout << "NO" << nl;
//         }
//     }

//     return 0;
// }
