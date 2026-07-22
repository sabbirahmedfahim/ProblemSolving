#include<bits/stdc++.h>
#define nl '\n'
#define int long long
using namespace std;

const int N = 2e5 + 5;
int a[N];
struct ST {
  #define lc (n << 1)
  #define rc ((n << 1) | 1)
  long long t[4 * N], lazy[4 * N];
  ST() {
    memset(t, 0, sizeof t);
    memset(lazy, 0, sizeof lazy);
  }
  inline void push(int n, int b, int e) {
    if (lazy[n] == 0) return;
    t[n] = t[n] + lazy[n] * (e - b + 1);
    if (b != e) {
      lazy[lc] = lazy[lc] + lazy[n];
      lazy[rc] = lazy[rc] + lazy[n];
    }
    lazy[n] = 0;
  }
  inline long long combine(long long a,long long b) {
    return a + b;
  }
  inline void pull(int n) {
    t[n] = t[lc] + t[rc];
  }
  void build(int n, int b, int e) {
    lazy[n] = 0;
    if (b == e) {
      t[n] = a[b];
      return;
    }
    int mid = (b + e) >> 1;
    build(lc, b, mid);
    build(rc, mid + 1, e);
    pull(n);
  }
  void upd(int n, int b, int e, int i, int j, long long v) {
    push(n, b, e);
    if (j < b || e < i) return;
    if (i <= b && e <= j) {
      lazy[n] = v; //set lazy
      push(n, b, e);
      return;
    }
    int mid = (b + e) >> 1;
    upd(lc, b, mid, i, j, v);
    upd(rc, mid + 1, e, i, j, v);
    pull(n);
  }
  long long query(int n, int b, int e, int i, int j) {
    push(n, b, e);
    if (i > e || b > j) return 0; //return null
    if (i <= b && e <= j) return t[n];
    int mid = (b + e) >> 1;
    return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
  }
};
ST st; 
int32_t main() {
    
    st.build(1, 1, N - 1);
    int q; cin >> q;
    int sz = 1;

    while (q--)
    {
        int cmd; cin >> cmd;

        if(cmd == 1)
        {
            int n, data; cin >> n >> data;
            st.upd(1, 1, N - 1, 1, n, data);

            long double x = st.query(1, 1, N - 1, 1, sz), y = sz;
            cout << fixed << setprecision(6) << x/y << nl;
        }
        else if(cmd == 2)
        {
            int data; cin >> data;
            sz++;
            st.upd(1, 1, N - 1, sz, sz, data);

            long double x = st.query(1, 1, N - 1, 1, sz), y = sz;
            cout << fixed << setprecision(6) << x/y << nl;
        }
        else 
        {
            int val = st.query(1, 1, N - 1, sz, sz);
            st.upd(1, 1, N - 1, sz, sz, -val);
            sz--;

            long double x = st.query(1, 1, N - 1, 1, sz), y = sz;
            cout << fixed << setprecision(6) << x/y << nl;
        }
    }
}