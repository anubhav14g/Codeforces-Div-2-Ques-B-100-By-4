// Problem Link-
// https://codeforces.com/problemset/problem/279/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	long long int sum=0;
    long n,t;
    cin>>n>>t;
    long ar[n];
    for(long i=0;i<n;i++) cin>>ar[i];
    long ans=0,left=0;
    for(long i=0;i<n;i++)
    {
        sum+=ar[i];
        while(sum>t)
        {
            sum-=ar[left];
            ++left;
        }
        if((i-left+1)>ans) ans=i-left+1;
    }
    cout<<ans;
	return 0;
}
