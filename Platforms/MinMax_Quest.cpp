// solution
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
struct comp{
bool operator() (const pair<int,int> &a,const pair<int,int> &b) const{
    if(a.first == b.first){
        return a.second > b.second;
    }
    return a.first < b.first;

}
};

void punk(){
    int q; cin >> q;
   
    map<int,int> mp;
    set<pair<int,int>, comp> s;
    while(q--){
        int k; cin >>  k;
        if(k == 1){
            int x; cin >> x;
           if(mp[x] >= 1){
            s.erase(s.find({mp[x],x}));
           }
           mp[x]++;
           s.insert({mp[x],x});
            
            
        }
        else{
            if(s.size() == 0){
                cout << "empty\n";
            }
            else{
               auto it = s.begin();
                int x = it->second;
                cout << x << '\n';
                int tmp = max((mp[x]/2),1);
                s.erase(s.find({mp[x],x}));
                mp[x]-=tmp;
                if(mp[x] != 0){
                s.insert({mp[x],x});
                }

            }
        }
    }
   
   
}


int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
    // ll t; cin >> t;
    //while(t--)
 punk(); 
    return 0;
}