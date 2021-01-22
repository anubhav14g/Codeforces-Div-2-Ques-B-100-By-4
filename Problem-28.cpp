// Problem Link-
// https://codeforces.com/problemset/problem/157/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
#define pi 3.14159265359
typedef long long ll;
using namespace std;
 
int main()
{
	int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    double ans=0;
    if(n==1)
    {
        ans=double(pi*(ar[0]*ar[0]));
    }
    else
    {
        sort(ar,ar+n);
        for(long i=n-1;i>=1;i-=2)
        {
            ans+=double(pi*(ar[i]*ar[i]-ar[i-1]*ar[i-1]));
        }
        if(n&1) ans+=double(pi*ar[0]*ar[0]);
    }
    printf("%.10lf",ans);
	return 0;
}

