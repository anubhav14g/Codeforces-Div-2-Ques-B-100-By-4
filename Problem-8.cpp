// Problem Link-
// https://codeforces.com/problemset/problem/230/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
typedef long long int lld;
using namespace std;
 
set<lld> st;
void SieveOfEratosthenes(lld n) 
{ 
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (lld p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (lld i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
    for (lld p=2; p<=n; p++) 
       if (prime[p]) 
          st.insert(p*p);
} 
 
int main()
{
	lld n;
    cin>>n;
    lld ar[n];
    set<lld> ans;
    for(lld i=0;i<n;i++) cin>>ar[i];
    SieveOfEratosthenes(1000000);
    for(lld i=0;i<n;i++)
    {
        if(st.find(ar[i])!=st.end()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}

