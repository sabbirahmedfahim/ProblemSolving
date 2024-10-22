// CGPT [do not understand yaar]
#include <bits/stdc++.h>
#define nl '\n'
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int booth(string s) {
    s += s;
    int n = s.size();
    vector<int> f(n, -1);
    int k = 0;
    
    for (int j = 1; j < n; j++) {
        int i = f[j - k - 1];
        while (i != -1 && s[j] != s[k + i + 1]) {
            if (s[j] < s[k + i + 1]) {
                k = j - i - 1;
            }
            i = f[i];
        }
        if (s[j] != s[k + i + 1]) {
            if (s[j] < s[k]) {
                k = j;
            }
            f[j - k] = -1;
        } else {
            f[j - k] = i + 1;
        }
    }
    return k;
}

int main() {
    FAJR_BOOST();
    
    int n;
    string s;
    cin >> n >> s;

    int smallest_rotation_start = booth(s);

    if (smallest_rotation_start == 0) {
        cout << "Yes" << nl;
    } else {
        cout << "No" << nl;
    }
    
    return 0;
}


// TLE on test case 15 [i prefer this]
// #include <bits/stdc++.h>
// #define nl '\n'
// #define ll long long int
// #define input(v) for(auto &data : v) cin >> data
// #define print(v) for(auto data : v) cout << data << " "; cout << nl
// #define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
// using namespace std;
// /*
// a number is ugly if, and only if /EVERY ONE/ of its k-cyclic shifts returns a number greater than or equal to it.
// */
// int main()
// {
//     FAJR_BOOST()
 
//     int n; string s;
//     cin >> n >> s;
//     string original_s = s;
//     list<char> l, l2;
//     for (int i = 0; i < s.size(); i++)
//     {
//         l.push_back(s[i]);
//         l2.push_back(s[i]);
//     }
    
//     for (int i = 0; i < n-1; i++) // O(n) * O(n) ==> O(n²)
//     {
//         char ch = l.back();
//         l.pop_back();
//         l.push_front(ch);
//         if(l < l2) // O(n)
//         {
//             cout << "No" << nl; return 0;
//         }
//     }
//     cout << "Yes" << nl;
    
//     return 0;
// }

// TLE on test case 12
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
//     string temp = s;
//     list<char> l;
    
//     while (!s.empty())
//     {
//         l.push_back(s.back());
//         s.pop_back();
//     }
//     reverse(l.begin(), l.end());

//     int k = n-1;
//     k = k%n;
//     while (k--)
//     {
//         int data = l.back();
//         l.pop_back();
//         l.push_front(data);
//         string afterKCycle;
//         for (auto data : l)
//         {
//             afterKCycle.push_back(data);
//         }
//         if (afterKCycle < temp)
//         {
//             cout << "No"; return 0;
//         }
//     }
//     cout << "Yes";

//     return 0;
// }