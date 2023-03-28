#include<iostream> 
#include<bits/stdc++.h>
using namespace std ; 


// Sieve of Eratosthenes


bitset<1000000> Primes;
void sieve(int n)
{
    Primes[0] = 1;
    for (int i = 3; i*i <= n; i += 2) {
        if (Primes[i / 2] == 0) {
            for (int j = 3 * i; j <= n; j += 2 * i)
                Primes[j / 2] = 1;
        }
    }
}


//take o(nloglogn) 
//to check the n is prime or not 
// if(n % 2 == 1 && Primes[n / 2] == 0 ||n==2) cout<<n<<endl; 
