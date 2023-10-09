#include<bits/stdc++.h>
#include<iostream>
using namespace std ;
void factor(vector<int> &arr , int n){
    int i = 2 ; 
    while(i*i<=n){
        if(n % i ==0){
            arr.push_back(i); 
            if(i * i != n){
                arr.push_back(n / i) ; 
            }
        }
        i++; 
    }
    if(n>1) arr.push_back(n) ; 
}
int main(){
    int n ; 
    cin>>n; 
    vector<int> fact ; 
    factor(fact , n) ; 
    for(auto x : fact){
        cout<<x<<" " ; 
    }
    cout<<endl ; 
}