#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin >> n;
    if(n%3 == 0) cout << 0 << endl;
    else if(n%3 == 1) cout << 2 << endl;
    else cout << 1 << endl;
}
int main() {
	// your code goes here
	int t = 1; 
	cin >> t;
	while(t--)
	{
	    solve();
	}

}