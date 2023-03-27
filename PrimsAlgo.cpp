#include<bits/stdc++.h>
using namespace std;
int main() {
    int N = 5  , m = 6 ; 
    //adjacency list 
    vector<pair<int,int> > adj[N]; 
	adj[0].push_back({1,2});
	adj[0].push_back({3,6});
	adj[1].push_back({0,2});
	adj[1].push_back({2,3});
	adj[1].push_back({3,8});
	adj[1].push_back({4,5});
	adj[2].push_back({1,3});
	adj[2].push_back({4,7});
	adj[3].push_back({0,6});
	adj[3].push_back({1,8});
	adj[4].push_back({1,5});
	adj[4].push_back({2,7});

    int parent[N];  //parent vector
    int key[N] = {INT_MAX} ;   // distance or key vector
    bool mstSet[N] ; //MST vector 
    for(int i = 0 ; i<N;i++){
        key[i] = INT_MAX ; 
        mstSet[i] = false ; 
    }
    priority_queue<pair<int ,int > ,vector<pair<int,int>> , greater<pair<int,int>>> pq ;  // priority queue of pair<int,int> {key , vertex} ; 
    parent[0] = -1 ;  
    key[0] = 0 ; 
    pq.push({0,0}); 
    while(!pq.empty()){
        auto u = pq.top().second; 
        pq.pop() ; 
        mstSet[u]  = true;
        for(auto node : adj[u]){
            int v = node.first ; 
            int w = node.second ; 
            if(mstSet[v]==false && w<key[v]){
                key[v] = w ; 
                parent[v] = u ; 
                pq.push({key[v] , v}) ; 
            }
        }
    }
    
    //constructing the MST ---
    vector<pair<int,int>> adj1[N] ; 
    for(int i = 1 ; i<N ;i++){
        adj1[i].push_back({parent[i] , key[i]});
      //  adj1[parent[i]].push_back({i , key[i]});
    }
    //printing the MST 
    for(int i = 0  ; i<N ;i++){
        for(auto u:adj1[i]){
            cout<<i<<" " <<u.first<<" "<<u.second<<endl; 
        }
    }
    return 0 ; 
}