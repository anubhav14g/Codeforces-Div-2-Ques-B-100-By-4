// Problem Link-
// https://codeforces.com/problemset/problem/365/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	long n;
    cin>>n;
    long ar[n];
    for(long i=0;i<n;i++) cin>>ar[i];
    if(n<=2) cout<<n;
    else
    {
        long ans=1,left=0,right=2;
        while(right<n)
        {
            long sum=ar[right-1]+ar[right-2];
            if(sum!=ar[right])
            {
                long l=right-1-left+1;
                if(l>ans) ans=l;
                left=right-1;
            }
            ++right;
        }
        long l=right-1-left+1;
        if(l>ans) ans=l;
        cout<<ans;
    }
	return 0;
}

