// dsu__kruskal_mst
struct Edge{
    int u, v, w; 
    Edge(int u, int v, int w){
        this->u = u; this->v = v; this->w = w;
    }
};
bool cmp(Edge a, Edge b){
    return a.w < b.w;
}
int main(){
    int n, e; cin >> n >> e;
    dsu_initialize(n); vector<Edge> edgeList;
    while (e--){
        int u, v, w; cin >> u >> v >> w; edgeList.push_back((Edge(u, v, w)));
    }
    sort(edgeList.begin(), edgeList.end(), cmp); 
    int totalCost = 0; // store costs
    for (Edge ed : edgeList){
        int leaderU = dsu_find(ed.u), leaderV = dsu_find(ed.v);
        if(leaderU == leaderV) continue;
        else{
            dsu_union_by_size(ed.u, ed.v); totalCost += ed.w;
        } 
    }
    cout << totalCost;
    return 0;
}