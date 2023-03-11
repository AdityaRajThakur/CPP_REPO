#include<iostream> 
#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define mod 100000007

ll binexp(ll  a, ll b) {
		long res = 1;
		while (b != 0) {
			if (b % 2 != 0)
				res *= a;
			a *= a;
			b /= 2;
		}
		return res;
}

int main(){
    ll ok = binexp(5 ,2) ; 
    cout<<ok<<endl; 
}