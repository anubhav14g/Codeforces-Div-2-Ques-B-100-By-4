// Problem Link-
// https://codeforces.com/problemset/problem/454/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	long n;
    cin>>n;
    long ar[n];
    long pos,count=0,cur=0;
    for(long i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]<cur)
        {
            ++count;
            pos=i;
        }
        cur=ar[i];
    }
    if(count==0) cout<<0;
    else if(count>1) cout<<-1;
    else
    {
        if(ar[n-1]>ar[0]) cout<<-1;
        else cout<<n-pos;
    }
	return 0;
}
