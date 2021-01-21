// Problem Link-
// https://codeforces.com/problemset/problem/362/B

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
    int g=1;
    for(long i=0;i<m;i++)
    {
        if(ar[i]==1 || ar[i]==n)
        {
            g=0;
            break;
        }
    }
    if(g==0) cout<<"NO";
    else
    {
        if(m<=2)
        {
            cout<<"YES";
        }
        else
        {
            int f=1;
            sort(ar,ar+m);
            for(long i=2;i<m;i++)
            {
                if(((ar[i]-ar[i-1])==1) && ((ar[i-1]-ar[i-2])==1))
                {
                    f=0;
                    break;
                }
            }
            if(f==1) cout<<"YES";
            else cout<<"NO";
        }
    }
	return 0;
}

