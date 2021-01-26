// Problem Link-
// http://codeforces.com/problemset/problem/58/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	long n;
    cin>>n;
    cout<<n<<" ";
    int f=0;
    while(n!=1)
    {
        for(long i=n-1;i>=1;i--)
        {
            if(n%i==0)
            {
                cout<<i<<" ";
                n=i;
                f=1;
                break;
            }
        }
        if(f==0) break;
        else f=0;
    }
    if(n!=1) cout<<1;
	return 0;
}


