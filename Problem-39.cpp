// Problem Link-
// https://codeforces.com/problemset/problem/366/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	long n,k;
    cin>>n>>k;
    long ar[n],sum[n];
    for(long i=0;i<n;i++)
    {
        cin>>ar[i];
        sum[i]=ar[i];
    }
    if(k==1)
    {
        cout<<1;
    }
    else if(k==n)
    {
        long mi=INT_MAX,index=0;
        for(long i=0;i<n;i++)
        {
            if(ar[i]<mi)
            {
                mi=ar[i];
                index=i+1;
            }
        }
        cout<<index;
    }
    else
    {
        for(long i=0;i<n;i++)
        {
            if((i-k)>=0)
            {
                sum[i]+=sum[i-k];
            }
        }
        long count=k;
        vector<pair<long,long>> ans;
        for(long i=n-1;i>=0;i--)
        {
            if(count<=0) break;
            else
            {
                ans.push_back(make_pair(sum[i],count));
            }
            --count;
        }
        sort(ans.begin(),ans.end());
        cout<<ans[0].second;
    }
	return 0;
}

