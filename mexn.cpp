#include<bits/stdc++.h>

using namespace std; 
#define MAX_N 10000000
int mex(vector<int> const& A) {
    static bool used[MAX_N+1] = { 0 };

    // mark the given numbers
    for (int x : A) {
        if (x <= MAX_N)
            used[x] = true;
    }

    // find the mex
    int result = 0;
    while (used[result])
        ++result;

    // clear the array again
    for (int x : A) {
        if (x <= MAX_N)
            used[x] = false;
    }

    return result;
}
int main(){
    vector<int > arr ; 
    for(int i = 0 ; i<20 ;i++) arr.push_back(i) ; 
    int ans = mex(arr) ; 
    cout<<ans<<endl; 
    return 0 ; 
}