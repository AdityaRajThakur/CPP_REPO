#include<iostream> 
#include<bits/stdc++.h> 
using namespace std; 
#define ll long long 


vector<vector<ll>> mat_mul(vector<vector<ll>> a, vector<vector<ll>> b, ll mod) {
	// Matrix Multiplication
	int n = a.size();
	vector<vector<ll>> res(n, vector<ll>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				res[i][j] += a[i][k] * b[k][j];
				res[i][j] %= mod;
			}
		}
	}
	return res;
}
vector<vector<ll>> mat_pow(vector<vector<ll>> a, ll b, ll mod) {
	// Matrix exponentiation
	int n = a.size();
	vector<vector<ll>> res(n, vector<ll>(n));
	for (int i = 0; i < n; i++) res[i][i] = 1;
	while (b) {
		if (b & 1) res = mat_mul(res, a, mod);
		a = mat_mul(a, a, mod);
		b >>= 1;
	}
	return res;
}

int main(){
    
}