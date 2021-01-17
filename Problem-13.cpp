// Problem Link-
// https://codeforces.com/problemset/problem/450/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
typedef long long int lld;
using namespace std;
 
int main()
{
	lld x,y;
    cin>>x>>y;
    lld n;
    cin>>n;
    lld mod=n%6;
    if(mod==1)
    {
        if(x<0) cout<<((x)%1000000007+1000000007)%1000000007;
        else cout<<x%1000000007;
    }
    else if(mod==2)
    {
        if(y<0) cout<<((y)%1000000007+1000000007)%1000000007;
        else cout<<y%1000000007;
    }
    else if(mod==3)
    {
        if((y-x)<0) cout<<((y-x)%1000000007+1000000007)%1000000007;
        else cout<<(y-x)%1000000007;
    }
    else if(mod==4)
    {
        if((-1*x)<0) cout<<((-1*x)%1000000007+1000000007)%1000000007;
        else cout<<(-1*x)%1000000007;
    }
    else if(mod==5)
    {
        if((-1*y)<0) cout<<((-1*y)%1000000007+1000000007)%1000000007;
        else cout<<(-1*y)%1000000007;
    }
    else
    {
        if((x-y)<0) cout<<((x-y)%1000000007+1000000007)%1000000007;
     	else cout<<(x-y)%1000000007;
    }
	return 0;
}