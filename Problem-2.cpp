// Problem Link-
// https://codeforces.com/problemset/problem/339/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	long n,m;
    cin>>n>>m;
    long ar[m];
    for(long i=0;i<m;i++) cin>>ar[i];
    long long int ans=0;
    ans+=(ar[0]-1);
    for(int i=1;i<m;i++)
    {
        if(ar[i]>=ar[i-1])
        {
            ans+=(ar[i]-ar[i-1]);
        }
        else
        {
            ans+=(n-ar[i-1]+1);
            ans+=(ar[i]-1);
        }
    }
    cout<<ans;
	return 0;
}