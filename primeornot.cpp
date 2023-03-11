#include<iostream> 
#include<bits/stdc++.h>
using namespace std ; 


// Prime or Not 
bool isPrime(int x) {
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return false;
    }
    return true;
}

//take o(sqrt(n)) 