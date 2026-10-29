#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll>
using namespace std;
const int N = 1e5+9;

struct ST{
    ll arr[N],seg[4*N],lazy[4*N];

    void build(ll node_idx,ll start,ll end){
        if(start == end){
            seg[node_idx] = arr[start];
            return;
        }
        ll mid = (start+end)/2;
        build(node_idx*2,start,mid);
        build(node_idx*2 +1,mid+1,end);
        seg[node_idx] = seg[node_idx*2] + seg[node_idx*2 +1];
    }

    void push(ll node_idx,ll start,ll end){
        if(lazy[node_idx]){
            if((end-start+1)&1) seg[node_idx] ^= lazy[node_idx];
            if(start != end){
                lazy[node_idx*2] ^= lazy[node_idx];
                lazy[node_idx*2 +1] ^= lazy[node_idx];
            }
            lazy[node_idx] = 0;
        }
    }

    void lazy_upd(ll node_idx,ll start,ll end,ll l,ll r,ll val){
        push(node_idx,start,end);
        if(l>end || r<start) return;
        if(l<=start && r>=end){
            lazy[node_idx] += val;
            push(node_idx,start,end);
            return;
        }
        ll mid = (start + end) /2;
        lazy_upd(node_idx*2,start,mid,l,r,val);
        lazy_upd(node_idx*2 +1,mid+1,end,l,r,val);
        seg[node_idx] = seg[node_idx*2] + seg[node_idx*2 +1];
    }

    ll lazy_query(ll node_idx,ll start,ll end,ll l,ll r){
        push(node_idx,start,end);
        if(end<l || start>r){
            return 0;
        }
        if(l<=start && end<=r){
            return seg[node_idx];
        }
        ll mid = (start+end)/2;
        ll left = lazy_query(node_idx*2,start,mid,l,r);
        ll right = lazy_query(node_idx*2 +1,mid+1,end,l,r);
        return left+right;
    }
};

void solve(){
    ll n; cin >> n;
    ST st;

    for(int i = 1;i<=n;i++){
        cin>>st.arr[i];
    }

    st.build(1,1,n);

    ll m; cin >> m;

    while (m--)
    {
        int cmd; cin >> cmd;

        if(cmd == 1)
        {
            int l, r; cin >> l >> r;

            cout << st.lazy_query(1, 1, n, l, r) << endl;
        }
        else
        {
            int l, r, data; cin >> l >> r >> data;

            st.lazy_upd(1, 1, n, l, r, data);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}