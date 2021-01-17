// Problem Link-
// https://codeforces.com/problemset/problem/265/B

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
    if(n==1) cout<<ar[0]+1;
    else
    {
        long ans=0,prev=0;
        for(long i=0;i<n-1;i++)
        {
            ans+=ar[i]-prev+1;
            prev=min(ar[i],ar[i+1]);
            ans+=ar[i]-min(ar[i],ar[i+1]);
            ans+=1;
        }
        ans+=ar[n-1]-prev+1;
        cout<<ans;
    }
	return 0;
}