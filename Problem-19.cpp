// Problem Link-
// https://codeforces.com/problemset/problem/432/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	long n;
    cin>>n;
    unordered_map<long,long> mp2;
    long ar[n],br[n],away[n];
    for(long i=0;i<n;i++)
    {
        long x,y;
        cin>>x>>y;
        mp2[x]++;
        away[i]=y;
        ar[i]=0;
        br[i]=0;
    }
    for(long i=0;i<n;i++)
    {
        ar[i]+=(n-1);
        ar[i]+=mp2[away[i]];
        br[i]=2*(n-1)-ar[i];
    }
    for(long i=0;i<n;i++)
    {
        cout<<ar[i]<<" "<<br[i];
        cout<<endl;
    }
	return 0;
}