#include<iostream> 
#include<vector>
using namespace std ; 

int main(){
    int n ; 
    cin>>n; 
    vector<int> arr(n) ; 
    for(int i = 0 ;i<n;i++){
        cin>>arr[i] ; 
    }
    vector<vector<int>> dp(n + 1 , vector<int> (n + 1  ,  0 )) ; 
    int ans = INT_MAX  ; 
    for(int i = 0 ;i<=n;i++){
        dp[i][i] = 0 ;
    }
    for(int i = 1 ;i<n;i++){
        for(int j = i + 1 ; j<n;j++){
            int temp = 0 ;  
            for(int k = i ;k< j;k++){
                temp = dp[i][k] + dp[k + 1 ][j] + arr[i-1] * arr[k] * arr[j] ; 
                dp[i][j] = min( INT_MAX , temp ) ; 
            }
        }
    }
    cout<<dp[1][n-1]<<endl; 
    return 0 ; 
}