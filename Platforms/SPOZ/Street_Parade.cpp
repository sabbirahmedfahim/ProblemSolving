#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
must understand these test cases to solve the problem:
input:
5
5 1 2 4 3
0
output: 
yes

input:
10
1 2 10 5 4 3 9 8 7 6
0
output: 
yes

input:
10
6 1 5 2 7 3 4 10 8 9
0

output: 
no
*/
int main()
{
    iOS

    while (1)
    {
        int n; cin >> n; 
        if(n == 0) return 0;
        stack<int> st;
        int target = 1;
        for (int i = 0; i < n; i++)
        {
            int data; cin >> data;
            if(target == data) target++;
            else st.push(data);
            while (!st.empty() && st.top() == target)
            {
                st.pop(); target++;
            }
        }
        if(st.empty()) cout << "yes" << nl;
        else cout << "no" << nl;
    }
    

    return 0;
}