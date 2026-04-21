#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n; cin >> n;
    stack<char> st;
    string s;

    while(n--)
    {
        string cmd; cin >> cmd;
        if(cmd == "TYPE")
        {
            char ch; cin >> ch;
            s.push_back(ch);
            // if(!st.empty()) st.pop();

            while(!st.empty()) st.pop();
        }
        else if(cmd == "UNDO")
        {
            if(!s.empty()) 
            {
                st.push(s.back());
                s.pop_back();
            }
        }
        else 
        {
            if(!st.empty())
            {
                s.push_back(st.top());
                st.pop();
            }
        }
    }

    cout << s << endl;

    return 0;
}