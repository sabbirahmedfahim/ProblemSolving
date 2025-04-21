#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
ll calcCost(string x)
{
    ll cost = 1;
    if(x[0] == '1') cost++;
    for (int i = 1; i < x.size(); i++)
    {
        if(x[i] != x[i - 1]) cost += 2;
        else cost++;
    }
    return cost;
}
void solve()
{
    int n; string s; cin >> n >> s;

    int zero = count(all(s), '0');
    int one = count(all(s), '1');
    // cout << zero << " " << one << nl;

    if(zero == n)
    {
        cout << n << nl; return;
    }
    if(one == n)
    {
        cout << n + 1 << nl; return;
    }

    
    int idxFrom = -1, idxTo = -1, l = -1, r = -1;
    int mx = 0;
    // largest zero subarray
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '0')
        {
            l = i, r = i;
            i++;
            while (s[i] == '0' && i < n)
            {
                if(s[i] == '1') 
                {
                    i++; break;
                }
                r++, i++;
            }
            if(r - l + 1 > mx)
            {
                idxFrom = l, idxTo = r;
                mx = r - l + 1;
            }
        }
    }

    string arektaStr;

    // if r - l + 1 is equal to the count of zero, do nothing, otherwise, search another 00..
    if(r - l + 1 == zero)
    {
        // cout << "hey" << nl;
        for (int i = 0; i < zero; i++) arektaStr += '0';
        for (int i = 0; i < one; i++) arektaStr += '1';
        cout << calcCost(arektaStr) << nl; return;
    }

    // now i'm sure that there are min two zero blocks exists

    int arektaL = -1, arektaR = -1, arektaIdxL = -1, arektaIdxR = -1;
    mx = 0;
    // largest zero subarray (second one)
    for (int i = 0; i < n; i++)
    {
        if(i >= idxFrom && i <= idxTo) continue;
        if(s[i] == '0')
        {
            arektaL = i, arektaR = i;
            i++;
            while (s[i] == '0' && i < n)
            {
                if(s[i] == '1') 
                {
                    i++; break;
                }
                arektaR++, i++;
            }
            if(arektaR - arektaL + 1 > mx)
            {
                arektaIdxL = arektaL, arektaIdxR = arektaR;
                mx = arektaR - arektaL + 1;
            }
        }
    }

    // cout << idxFrom << "," << idxTo << " -- " << arektaIdxL << "," << arektaIdxR << nl;

    if(one == 2)
    {
        if(s[0] == '1' && s[n-1] == '0')
        {
            arektaStr.clear();
            arektaStr += '1';
            arektaStr += '1';
            for (int i = 0; i < zero; i++)
            {
                arektaStr += '0';
            }
            cout << calcCost(arektaStr) << nl;  return;
        }
        else if(s[0] == '0' && s[n-1] == '1')
        {
            arektaStr.clear();
            for (int i = 0; i < zero; i++)
            {
                arektaStr += '0';
            }
            arektaStr += '1';
            arektaStr += '1';
            cout << calcCost(arektaStr) << nl;  return;
        }
        // r na hole continue koruk
    }
    if(zero == 2)
    {
        if(s[0] == '0' && s[n-1] == '1')
        {
            arektaStr.clear();
            arektaStr += '0';
            arektaStr += '0';
            for (int i = 0; i < one; i++)
            {
                arektaStr += '1';
            }
            cout << calcCost(arektaStr) << nl;  return;
        }
        else if(s[0] == '1' && s[n-1] == '0')
        {
            arektaStr.clear();
            for (int i = 0; i < one; i++)
            {
                arektaStr += '1';
            }
            arektaStr += '0';
            arektaStr += '0';
            cout << calcCost(arektaStr) << nl;  return;
        }
        // r na hole continue koruk
    }

    if(idxFrom < arektaIdxL)
    {
        arektaStr.clear();

        for (int i = 0; i <= idxTo; i++) arektaStr += s[i];
        for (int i = arektaIdxR; i >= idxTo + 1; i--) arektaStr += s[i];
        for (int i = arektaIdxR + 1; i < n; i++) arektaStr += s[i];

        // cout << arektaStr << nl;

         string a = s, b = s, c = s;
         int op1 = -1, op2 = -1, op3 = -1, op4 = calcCost(arektaStr);
         if(idxFrom - 2 < n && s[idxFrom - 2] == '0' && s[idxFrom - 1] == '1') 
         {
             swap(a[idxFrom-2], a[idxFrom-1]);
         }
         if(idxTo + 2 < n && s[idxTo + 2] == '0' && s[idxTo + 1] == '1') 
         {
             swap(b[idxTo+2], b[idxTo+1]);
         }
         for (int i = 0; i < n-2; i++)
         {
            //  if(i >= idxFrom && i <= idxTo) continue;
             if(s[i] == '0' && s[i] != s[i + 1] && s[i] == s[i + 2])
             {
                if(i + 2 >= idxFrom && i + 2 <= idxTo) continue;
                swap(c[i], c[i + 1]); break;
             }
         }
        //  cout << a << " " << b << nl;
 
         vector<int> arr;
         op1 = calcCost(a);
         op2 = calcCost(b);
         op3 = calcCost(c);
         arr.push_back(op4);
         if(op1 != -1) arr.push_back(op1);
         if(op2 != -1) arr.push_back(op2);
         if(op3 != -1) arr.push_back(op3);
         sort(all(arr));     

        // cout << arektaStr << nl;
        cout << arr[0] << nl;
    }
    else 
    {
        arektaStr.clear();

        for (int i = 0; i <= arektaIdxR; i++) arektaStr += s[i];
        for (int i = idxTo; i >= arektaIdxR + 1; i--) arektaStr += s[i];
        for (int i = n-1; i >= idxTo + 1; i--) arektaStr += s[i];

        string a = s, b = s, c = s;
         int op1 = -1, op2 = -1, op3 = -1, op4 = calcCost(arektaStr);
         if(idxFrom - 2 < n && s[idxFrom - 2] == '0' && s[idxFrom - 1] == '1') 
         {
             swap(a[idxFrom-2], a[idxFrom-1]);
         }
         if(idxTo + 2 < n && s[idxTo + 2] == '0' && s[idxTo + 1] == '1') 
         {
             swap(b[idxTo+2], b[idxTo+1]);
         }

         for (int i = 0; i < n-2; i++)
         {
            //  if(i >= idxFrom && i <= idxTo) continue;
             if(s[i] == '0' && s[i] != s[i + 1] && s[i] == s[i + 2])
             {
                if(i + 2 >= idxFrom && i + 2 <= idxTo) continue;
                swap(c[i], c[i + 1]); break;
             }
         }
 
         vector<int> arr;
         op1 = calcCost(a);
         op2 = calcCost(b);
         op3 = calcCost(c);
         arr.push_back(op4);
         if(op1 != -1) arr.push_back(op1);
         if(op2 != -1) arr.push_back(op2);
         if(op3 != -1) arr.push_back(op3);
         sort(all(arr));     

        // cout << arektaStr << nl;
        cout << arr[0] << nl;

        // cout << "#" << arektaStr << nl;
        // cout << calcCost(arektaStr) << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}