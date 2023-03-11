#include<iostream> 
#include<bits/stdc++.h>
using namespace std ; 

// Prime Factorization using sieve 
int prime[1000001];
void sieve(){
    int MAXN = pow(10, 6) + 1 ; 
    prime[1] = 1;
    for (int i=2; i<MAXN; i++) prime[i] = i;
    for (int i=2; i*i<MAXN; i++){
        if (prime[i] == i){
            for (int j=i*i; j<MAXN; j+=i){
                if (prime[j]==j){
                    prime[j] = i;
                }
            }
        }
    }
}
void getFactor(vector<int>& factor , int n ){
    while(n>1){
        factor.push_back(prime[n]) ; 
        n/=prime[n] ; 
    }
}
//to check if prime or not use --> if(prime[n]==n) out("yes, it is prime")  ;
//sieve --> o(nloglogn) 
//factor in --> o(log(n)) 
int main(){
    sieve(); 
    vector<int> arr ; 
    getFactor(arr ,10) ; 
}