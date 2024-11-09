#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    int q; cin >> q;
    int customerNo = 1;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int> ans;
    
    while (q--)
    {
        int cmd; cin >> cmd;
        if(cmd == 1)
        {
            int money; cin >> money;
            s.insert({customerNo, money});
            ml.insert({money, -customerNo}); // remember minus
            customerNo++;
        }
        else if(cmd == 2)
        {
            int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            ml.erase({money, -pos}); // remember minus
            s.erase(s.begin());
        }
        else 
        {
            int pos = -ml.rbegin()->second, money = ml.begin()->first; // remember minus
            ans.push_back(pos);
            // ml.erase(ml.rbegin()); // rbegin do not work, use --ml.end() instead
            ml.erase(--ml.end()); 
            s.erase({pos, money});
        }
    }
    
    print(ans);

    return 0;
}


// mj_riffu
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);

//    int n, customerNo = 1;
//    cin >> n;
//    set<pair<int, int>> s;
//    multiset<pair<int, int>> ml;
//    vector<int> ans;
//    for (int i = 1;i <= n;i++) {
//       int type;
//       cin >> type;
//       if (type == 1) {
//          int money;
//          cin >> money;
//          s.insert({ customerNo,money });
//          ml.insert({ money,-customerNo });
//          customerNo++;
//       }
//       else if (type == 2) {
//          int pos = s.begin()->first, money = s.begin()->second;
//          ans.push_back(pos);
//          s.erase(s.begin());
//          ml.erase({ money,-pos });
//       }
//       else {
//          int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
//          ans.push_back(pos);
//          ml.erase(--ml.end());
//          s.erase({ pos,money });
//       }
//    }

//    for (auto value : ans) {
//       cout << value << " ";
//    }
//    cout << '\n';

//    return 0;
// }