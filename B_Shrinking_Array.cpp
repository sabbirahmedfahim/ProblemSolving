// #include <bits/stdc++.h>
// #define nl '\n'
// #define ll long long
// #define all(c) c.begin(),c.end()
// #define print(c) for(auto e : c) cout << e << " "; cout << nl
// using namespace std;
// void solve()
// {
//     int n; cin >> n;
//     vector<int> a(n + 1);
//     for (int i = 1; i <= n; i++)
//     {
//         cin>>a[i];
//     }
    
//     // i can assume answer is valid until 2, oh no! think of an array : 2 100 200 300 400 2
    
//     for (int i = 1; i <= n-1; i++)
//     {
//         if(abs(a[i] - a[i + 1]) <= 1)
//         {
//             cout << 0 << nl; return;
//         }
//     }
    
//     int res = 1E9;
//     for (int i = 1; i <= n-2; i++) // TLE
//     {
//         int hi = max(a[i], a[i + 1]), lo = min(a[i], a[i + 1]);
//         for (int j = i + 2; j <= n; j++)
//         {
//             // cout << a[j] << " " << a[j + 1] << nl;
//             int l = min(a[j], a[j + 1]), r = max(a[j], a[j + 1]);
//             if(j == n) l = a[j], r = a[j];
//             if(l >= lo-1 && l <= hi+1)
//             {
//                 res = min(res, j - (i + 1)); 
//             }
//             else if(r >= lo-1 && r <= hi+1)
//             {
//                 res = min(res, j - (i + 1));
//             }
//         }
//     }

//     if(res == 1E9)
//     {
//         cout << -1 << nl; return;
//     }
//     cout << res << nl;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false); cin.tie(NULL);

//     int t; cin >> t;
//     for(int tt = 1; tt <= t; tt++)
//     {
//         // cout << "TEST CASE-" << tt << nl;
//         solve();
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define vi vector<int>
#define mii map<int,int>
#define mci map<char,int>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

bool isok( int ar[], int n ){
    for(int i = 1; i < n; i++){
        if(  abs(ar[i]-ar[i-1]) <= 1 ){
            return true;
        }
    }
    return false;
}

void solve(){
    int n;  cin >> n;
    int ar[n+10];

    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }

    if(isok(ar, n)){
        cout << 0 << endl;
        return;
    }

    int k = n;

    if(ar[1] > ar[0]){
        for(int i = 1; i < n; i++){
            if(ar[i] < ar[i-1]){
                cout << 1 << endl;
                return;
            }
        }
        cout << -1 << endl;
        return;
    }

    for(int i = 1; i < n; i++){
            if(ar[i] > ar[i-1]){
                cout << 1 << endl;
                return;
            }
        }
        cout << -1 << endl;
        return;



}

int main()
{
    optimize();
    
    int t;
    cin >> t;

    while(t--)  solve();

    return 0;
}