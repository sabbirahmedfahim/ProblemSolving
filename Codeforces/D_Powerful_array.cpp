#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E6 + 7;
int blockSize;
ll freq[N] = {0};
int a[N];
class Q
{
    public:
    int l, r, idx;
};
Q q[N];
bool cmp(Q &p, Q &q) { // faster 
    if (p.l / blockSize != q.l / blockSize) return (p.l == q.l ? p.r <= q.r : p.l < q.l); // return p < q;
    return (p.l / blockSize & 1) ? (p.r < q.r) : (p.r > q.r);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, queries; cin >> n >> queries;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < queries; i++)
    {
        int l, r; cin >> l >> r;
        q[i].l = l;
        q[i].r = r;
        q[i].idx = i;
    }
    
    blockSize = sqrtl(n) + 1;
    sort(q, q+queries, cmp);

    ll res[queries];

    int curr_l = 0, curr_r = -1, l, r;
    // ll curr_ans = 0;
    ll myAns = 0;
    for (int i = 0; i < queries; i++)
    {
        l = q[i].l, r = q[i].r;
        l--, r--;

        while (curr_r < r)
        {
            curr_r++;
            
            myAns -= 1ll * a[curr_r] * (1ll * freq[a[curr_r]] * freq[a[curr_r]]);
            freq[a[curr_r]]++;
            myAns += 1ll * a[curr_r] * (1ll * freq[a[curr_r]] * freq[a[curr_r]]);
            // curr_ans += a[curr_r];
        }
        while (curr_l > l)
        {
            curr_l--;

            myAns -= 1ll * a[curr_l] * (1ll * freq[a[curr_l]] * freq[a[curr_l]]);
            freq[a[curr_l]]++;
            myAns += 1ll * a[curr_l] * (1ll * freq[a[curr_l]] * freq[a[curr_l]]);
            // curr_ans += a[curr_l];
        }
        while (curr_l < l)
        {
            // curr_ans -= a[curr_l];
            myAns -= 1ll * a[curr_l] * (1ll * freq[a[curr_l]] * freq[a[curr_l]]);
            freq[a[curr_l]]--;
            myAns += 1ll * a[curr_l] * (1ll * freq[a[curr_l]] * freq[a[curr_l]]);

            curr_l++;
        }
        while (curr_r > r)
        {
            // curr_ans -= a[curr_r];
            myAns -= 1ll * a[curr_r] * (1ll * freq[a[curr_r]] * freq[a[curr_r]]);
            freq[a[curr_r]]--;
            myAns += 1ll * a[curr_r] * (1ll * freq[a[curr_r]] * freq[a[curr_r]]);

            curr_r--;
        }
        
        res[q[i].idx] = myAns;
        // res[q[i].idx] = curr_ans;
    }

    for(auto e : res)
    {
        cout << e << nl;
    }

    return 0;
}