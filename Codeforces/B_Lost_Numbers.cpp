#include <bits/stdc++.h>
#define nl endl
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
vector<int> datas;
void ask(int l, int r)
{
    cout << "? " << l << " " << r << nl;
    int data; cin >> data;
    datas.push_back(data);
}
bool OK1(int x, int y, int z)
{
    int mul = datas[0] + datas[1];
    if(x == y || y == z || x == z) return false;
    else if(mul != ((x * y) + (y * z))) return false;
    return true;
}
bool OK2(int x, int y, int z)
{
    int mul = datas[2] + datas[3];
    if(x == y || y == z || x == z) return false;
    else if(mul != ((x * y) + (y * z))) return false;
    return true;
}
int main()
{
    // ios_base::sync_with_stdio(false); cin.tie(NULL);

    set<int> st = {4, 8, 15, 16, 23, 42};

    ask(1, 2);
    ask(2, 3);
    ask(4, 5);
    ask(5, 6);
    // print(datas);

    vector<int> res;

    if(st.count(datas[0] / 4) && st.count(datas[1] / 4) && OK1(datas[0] / 4, 4, datas[1] / 4))
    {
        res.push_back(datas[0] / 4);
        res.push_back(4);
        res.push_back(datas[1] / 4);
    }
    else if(st.count(datas[0] / 8) && st.count(datas[1] / 8) && OK1(datas[0] / 8, 8, datas[1] / 8))
    {
        res.push_back(datas[0] / 8);
        res.push_back(8);
        res.push_back(datas[1] / 8);
    }
    else if(st.count(datas[0] / 15) && st.count(datas[1] / 15) && OK1(datas[0] / 15, 15, datas[1] / 15))
    {
        res.push_back(datas[0] / 15);
        res.push_back(15);
        res.push_back(datas[1] / 15);
    }
    else if(st.count(datas[0] / 16) && st.count(datas[1] / 16) && OK1(datas[0] / 16, 16, datas[1] / 16))
    {
        res.push_back(datas[0] / 16);
        res.push_back(16);
        res.push_back(datas[1] / 16);
    }
    else if(st.count(datas[0] / 23) && st.count(datas[1] / 23) && OK1(datas[0] / 23, 23, datas[1] / 23))
    {
        res.push_back(datas[0] / 23);
        res.push_back(23);
        res.push_back(datas[1] / 23);
    }
    else if(st.count(datas[0] / 42) && st.count(datas[1] / 42) && OK1(datas[0] / 42, 42, datas[1] / 42))
    {
        res.push_back(datas[0] / 42);
        res.push_back(42);
        res.push_back(datas[1] / 42);
    }
    // cout << res.size() << nl;


    if(st.count(datas[2] / 4) && st.count(datas[3] / 4) && OK2(datas[2] / 4, 4, datas[3] / 4))
    {
        res.push_back(datas[2] / 4);
        res.push_back(4);
        res.push_back(datas[3] / 4);
    }
    else if(st.count(datas[2] / 8) && st.count(datas[3] / 8) && OK2(datas[2] / 8, 8, datas[3] / 8))
    {
        res.push_back(datas[2] / 8);
        res.push_back(8);
        res.push_back(datas[3] / 8);
    }
    else if(st.count(datas[2] / 15) && st.count(datas[3] / 15) && OK2(datas[2] / 15, 15, datas[3] / 15))
    {
        res.push_back(datas[2] / 15);
        res.push_back(15);
        res.push_back(datas[3] / 15);
    }
    else if(st.count(datas[2] / 16) && st.count(datas[3] / 16) && OK2(datas[2] / 16, 16, datas[3] / 16))
    {
        res.push_back(datas[2] / 16);
        res.push_back(16);
        res.push_back(datas[3] / 16);
    }
    else if(st.count(datas[2] / 23) && st.count(datas[3] / 23) && OK2(datas[2] / 23, 23, datas[3] / 23))
    {
        res.push_back(datas[2] / 23);
        res.push_back(23);
        res.push_back(datas[3] / 23);
    }
    else if(st.count(datas[2] / 42) && st.count(datas[3] / 42) && OK2(datas[2] / 42, 42, datas[3] / 42))
    {
        res.push_back(datas[2] / 42);
        res.push_back(42);
        res.push_back(datas[3] / 42);
    }
    
    cout << "! ";
    // cout << res.size() << nl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    

    return 0;
}