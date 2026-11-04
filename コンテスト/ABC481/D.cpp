#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, S, T;
    cin >> N >> M >> S >> T;
    S--; T--;

    using P = pair<int,int>;
    vector<vector<P>> g(N);
    for(int i = 0; i < M; i++){
        int A, B;
        cin >> A >> B;
        A--; B--;
        g[A].emplace_back(B,1);
    }

     for(int i = 0; i < N; i++){
        if(g[i].size() > 0){
            sort(g[i].begin(),g[i].end());
            g[i][0].second = 0;
        }
    }

    const int INF = 1001001001;
    vector<int> dist(N, INF);
    deque<P> q; 
    auto push = [&](int v, int d, int c){
        d += c;
        if(dist[v] <= d) return;
        dist[v] = d;
        if(c == 0){
            q.emplace_front(d,v);
        }else{
            q.emplace_back(d,v);
        }
    };

    push(S,0,0);

    while(q.size()){
        auto [d,v] = q.front(); q.pop_front();
        if(dist[v] != d) continue;
        for(auto [u,c]: g[v]) push(u,d,c);
    }

    if(dist[T] == INF) cout << -1 << endl;
    else cout << dist[T] << endl;

    return 0;
    

    
}