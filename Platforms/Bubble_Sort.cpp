#include <bits/stdc++.h>

using namespace std;

const int MOD = 10000007;
long long swapCount = 0;

void merge(vector<int> &arr, int l, int m, int r)
{
    int leftSz = m - l + 1;
    int rightSz = r - m;
    int L[leftSz];
    int R[rightSz];

    int idx = 0;
    for (int i = l; i <= m; i++)
    {
        L[idx] = arr[i];
        idx++;
    }
    idx = 0;
    for (int i = m + 1; i <= r; i++)
    {
        R[idx] = arr[i];
        idx++;
    }

    int i = 0, j = 0;
    int cur = l;
    while (i < leftSz && j < rightSz)
    {
        if (L[i] <= R[j])
        {
            arr[cur] = L[i];
            i++;
        }
        else
        {
            arr[cur] = R[j];
            swapCount = (swapCount + (leftSz - i)) % MOD; 
            j++;
        }
        cur++;
    }

    while (i < leftSz)
    {
        arr[cur] = L[i];
        i++, cur++;
    }
    while (j < rightSz)
    {
        arr[cur] = R[j];
        j++, cur++;
    }
}

void merge_sort(vector<int> &arr, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

void solve(int test)
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    swapCount = 0;
    merge_sort(arr, 0, n - 1);

    cout << "Case " << test << ": " << swapCount << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }

    return 0;
}
