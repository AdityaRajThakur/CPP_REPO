#include<iostream> 
#include<bits/stdc++.h> 
using namespace std;  

int lower_bound(vector<int> &a , int x){
    int l = 0 , r = a.size() ; 
    while(l<r){
        int mid = l+ (r - l ) /2 ; 
        if(a[mid]>=x){
            r = mid ; 
        }else{
            l = mid + 1; 
        }
    }
    return l ; 
}
int upper_bound(vector<int> &a , int x){
    int l = 0 , r = a.size() ; 
    while(l<r){
        int mid = l+ (r - l ) /2 ; 
        if(a[mid]>x){
            r = mid ; 
        }else{
            l = mid + 1; 
        }
    }
    return l ; 
}


int main(){
    vector<int> a = {5,7,7,8,8,10} ; 
    int idx_l= lower_bound(a , 8) ; 
    int idx_u= upper_bound(a , 8) ; 
    cout<<idx_l<<" "<<idx_u<<endl; 
}