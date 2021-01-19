// Problem Link-
// https://codeforces.com/problemset/problem/486/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	int m,n;
    cin>>m>>n;
    int br[m][n],ar[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>br[i][j];
            ar[i][j]=1;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(br[i][j]==0)
            {
                for(int k=0;k<n;k++)
                {
                    ar[i][k]=0;
                }
                for(int k=0;k<m;k++)
                {
                    ar[k][j]=0;
                }
            }
        }
    }
    int f=1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(br[i][j]==1)
            {
                int ans=0;
                for(int k=0;k<n;k++)
                {
                    ans=ans|ar[i][k];
                }
                for(int k=0;k<m;k++)
                {
                    ans=ans|ar[k][j];
                }
                if(ans==1)
                {
                    continue;
                }
                else
                {
                    f=0;
                    break;
                }
            }
        }
        if(f==0) break;
    }
    if(f==0) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        }
    }
	return 0;
}