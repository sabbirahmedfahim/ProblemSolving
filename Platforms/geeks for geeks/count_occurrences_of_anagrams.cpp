#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int search(string pat, string txt) {
	    // code here
		int n = txt.size(), k = pat.size(), cnt = 0;
		vector<int> target_freq(26, 0), cur_freq(26, 0);

		for(auto ch : pat) target_freq[ch - 'a']++;
		for (int i = 0; i < k; i++) cur_freq[txt[i] - 'a']++;

		if(target_freq == cur_freq) cnt++;
		for (int i = k, j = 0; i < n; i++, j++)
		{
			cur_freq[txt[j]-'a']--;
			cur_freq[txt[i]-'a']++;
			if(target_freq == cur_freq) cnt++;
		}
		return cnt;
	}
int main()
{
    iOS

    string txt, pat; cin >> txt >> pat;
    cout << search(pat, txt) << nl;

    return 0;
}