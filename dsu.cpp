#include<iostream> 
#include<bits/stdc++.h>
using namespace std ; 

#define SIZE 200005
struct DSU{
    int parent[SIZE] , rank[SIZE] ; 
    void cst(int n ){
        for(int i = 0 ; i<=n;i++){
            rank[i] = 1 ; 
            parent[i] = i ;
        }
    }
    int f(int a){
        if(parent[a]==a) return a ; 
        return parent[a] = f(parent[a]);
    }
    void u(int a ,int b){
        int x = f(a); 
        int y = f(b) ; 
        if(x==y) return ; 
        if(rank[x]<rank[y]){
            parent[x] = y ; 
            rank[y]+=rank[x]; 
        }else{
            parent[y]= x; 
            rank[x]+=rank[y]; 
        }
    }
    bool s(int a ,int b){
        return f(a)==f(b) ; 
    }
}dsu;

int main(){
    dsu.u(1 ,2 ) ; 
    dsu.f(2) ;
    return 0 ; 
}
