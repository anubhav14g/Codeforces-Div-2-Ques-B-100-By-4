// Problem Link-
// https://codeforces.com/problemset/problem/387/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	int n,m;
    cin>>n>>m;
    int ar[n],br[m];
    int check1[n],check2[m];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        check1[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        cin>>br[i];
        check2[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(check1[i]==0)
        {
            int f=0;
            for(int j=0;j<m;j++)
            {
                if(check2[j]==0 && br[j]==ar[i])
                {
                    f=1;
                    check2[j]=1;
                    break;
                }
            }
            if(f==1)
            {
                check1[i]=1;
            }
        }
    }
    int ans=0;
    sort(ar,ar+n);
    sort(br,br+m);
    for(int i=0;i<n;i++)
    {
        if(check1[i]==0)
        {
            int f=0;
            for(int j=0;j<m;j++)
            {
                if(check2[j]==0 && br[j]>ar[i])
                {
                    check2[j]=1;
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                check1[i]=1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(check1[i]==0) ++ans;
    }
    cout<<ans;
	return 0;
}


