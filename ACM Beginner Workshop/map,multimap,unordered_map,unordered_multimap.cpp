/* ===================== REMAINDER: TURN ON RECORDING =====================
   RECORDING STATUS: OFF
   Voice Record : OFF
========================================================================= */
/* If you see RECORDING is OFF, please remind me to turn it on! */

/* ============================================================================
   ============================   MAP   ========================================
   ============================================================================ */

/* Transition: Frequency Array → Map */
/* When values are small and fixed range → use array */
/* When values are large / negative / string → use map */

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int,int> mp;
//     vector<int> arr = {1, 5, 2, 1,1 , 5};

//     for(int i=0;i<arr.size();i++){
//         mp[arr[i]]++;
//     }

//     for(auto it = mp.begin(); it != mp.end(); it++){
//         cout << it->first << " --> " << it->second << endl;
//     }
//     return 0;
// }

/* Key-Value Pair Concept */
/* map<key_type, value_type> */
/* Example combinations */

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int,int> mp1;
//     map<char, int> mp2;
//     map<int,char> mp3;
//     map<string,int> mp4;
//     map<int,vector<int>> mp5;

//     return 0;
// }

/* mp[key] = 0 does NOT erase element */
/* It creates the key with value 0 if not exists */
/* To erase → use mp.erase(key); */

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int,int> mp;
//     mp[5] = 10;
//     mp[7] = 20;
//     mp[5] = 0;        // does not erase
//     mp.erase(7);      // erase key 7

//     for(auto [key,value] : mp){
//         cout << key << " --> " << value << endl;
//     }
//     return 0;
// }

/* Iteration Methods */

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int,int> mp;
//     mp[1]=10; mp[2]=20; mp[3]=30;

//     for(map<int,int>::iterator it = mp.begin(); it != mp.end(); it++){
//         cout << it->first << " --> " << it->second << endl;
//     }

//     for(auto it = mp.begin(); it != mp.end(); it++){
//         cout << it->first << " --> " << it->second << endl;
//     }

//     for(auto [key, value] : mp){
//         cout << key << " --> " << value << endl;
//     }

//     return 0;
// }

/* What is auto it = mp.begin()? */
/* it is an iterator, behaves like pointer */
/* *it dereferences iterator */
/* it->first → key */
/* it->second → value */

/* Common Functions */

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int,int> mp;
//     mp[1]=100;
//     mp[300] = 7;
//     mp[564] = 68;

//     cout << mp.size() << endl;
//     cout << mp.empty() << endl;
//     cout << mp.count(1) << endl;   // 0 or 1
//     cout << (mp.find(1)!=mp.end()) << endl;
//     cout << endl;

//     cout << mp.begin()->first << " --> " << mp.begin()->second << endl;

//     auto it = prev(mp.end());
//     cout << it->first << " --> " << it->second << endl;


//     mp.clear();

//     return 0;
// }

/* Underlying Algorithm */
/* map is based on Balanced Binary Search Tree (Red-Black Tree) */
/* Time Complexity: O(log N) */
/* Keys are stored in sorted order */


/* ============================================================================
   ============================   UNORDERED MAP   ==============================
   ============================================================================ */

/* Based on Hash Table */
/* Average Case: O(1) */
/* Worst Case: O(N) */
/* Order is NOT maintained */

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     unordered_map<int,int> ump;
//     vector<int> v = {1,2,3,1,2};

//     for(int i=0;i<v.size();i++){
//         ump[v[i]]++;
//     }

//     for(auto [key,value] : ump){
//         cout << key << " --> " << value << endl;
//     }

//     return 0;
// }

/* Same functions as map */

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     unordered_map<int,int> ump;
//     ump[10]=50;

//     cout << ump.size() << endl;
//     cout << ump.count(10) << endl;

//     ump.erase(10);
//     return 0;
// }

/* Why unordered_map gets TLE? */
/* Bad hash / many collisions */
/* Large constraints */


/* ============================================================================
   ============================   MULTIMAP   ===================================
   ============================================================================ */

/* Allows duplicate keys */
/* Keys are sorted */
/* No operator[] */
/* Must use insert */

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     multimap<int,string> mmp;
//     mmp.insert({1,"A"});
//     mmp.insert({1,"B"});
//     mmp.insert({2,"C"});

//     for(auto it = mmp.begin(); it != mmp.end(); it++){
//         cout << it->first << " --> " << it->second << endl;
//     }

//     return 0;
// }

/* count(key) can be > 1 */
/* equal_range(key) → gives range of same keys */

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     multimap<int,string> mmp;
//     mmp.insert({1,"A"});
//     mmp.insert({1,"B"});
//     mmp.insert({2,"C"});

//     auto range = mmp.equal_range(1);
//     for(auto it = range.first; it != range.second; it++){
//         cout << it->second << endl;
//     }

//     return 0;
// }

/* When to use multimap */


/* ============================================================================
   ============================   UNORDERED MULTIMAP   =========================
   ============================================================================ */

/* Allows duplicate keys */
/* Based on Hash Table */
/* No order maintained */
/* Average O(1), Worst O(N) */

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     unordered_multimap<int,string> ummp;
//     ummp.insert({1,"A"});
//     ummp.insert({1,"B"});

//     for(auto it = ummp.begin(); it != ummp.end(); it++){
//         cout << it->first << " " << it->second << endl;
//     }

//     return 0;
// }

/* Same functions as multimap */


/* ============================================================================
   ============================   IMPORTANT NOTES   ============================
   ============================================================================ */

/* map vs unordered_map */
/* Need sorted order → map */
/* Need faster average lookup → unordered_map */
/* Risk of TLE → prefer map in contest sometimes */

/* Key must be unique in map & unordered_map */
/* Duplicate keys allowed in multimap & unordered_multimap */

/* operator[] works in map & unordered_map */
/* operator[] does NOT work in multimap & unordered_multimap */

/* erase by iterator is faster */

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int,int> mp;
//     mp[5]=100;

//     auto it = mp.find(5);
//     if(it != mp.end()){
//         mp.erase(it);
//     }

//     return 0;
// }

/* Iterating unordered_map does NOT guarantee order */

/* Space Complexity: O(N) for all */

// https://codeforces.com/contest/44/problem/A


/* ============================================================================
   =============================     QnA     ==================================
   ============================================================================ */

/* Ask Your Queries! */


/* ============================================================================
   =============================     END     ==================================
   ============================================================================ */