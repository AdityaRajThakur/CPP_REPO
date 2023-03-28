#include<bits/stdc++.h>
using namespace std ; 


int mex(vector<int> const& A) {
    set<int> b(A.begin(), A.end());

    int result = 0;
    while (b.count(result))
        ++result;
    return result;
}

int main(){
    vector<int> arr ; 
    for(int i = 0 ; i<10;i++)arr.push_back(i) ; 
    int ans = mex(arr) ; 
    cout<<ans<<endl ; 
    return 0 ; 
}