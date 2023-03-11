#include<iostream> 
#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define mod 13
ll binexpomod(ll a, ll b) {
		long res = 1;
		a %= mod;
		while (b != 0) {
			if (b % 2 != 0)
				res = (res % mod) * (a % mod);
			a = (a % mod) * (a % mod);
			b /= 2;
		}
		return res;
}

int main(){
    // (ab) mod p = ( (a mod p) (b mod p) ) mod p
    ll ok = binexpomod(2 ,5 ) ; 
    cout<<ok <<endl; 
}