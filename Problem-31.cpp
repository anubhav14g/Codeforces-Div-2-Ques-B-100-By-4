// Problem Link-
// https://codeforces.com/problemset/problem/116/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	int n,m;
    cin>>n>>m;
    char ar[n][m];
    int check[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            check[i][j]=-1;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ar[i][j];
            if(ar[i][j]=='W')
            {
                check[i][j]=1;
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ar[i][j]=='P')
            {
                if((i+1)<n)
                {
                    if(ar[i+1][j]=='W')
                    {
                        if(check[i+1][j]==1) check[i+1][j]=0;
                    }
                }
                if((j+1)<m)
                {
                    if(ar[i][j+1]=='W')
                    {
                        if(check[i][j+1]==1) check[i][j+1]=0;
                    }
                }
                if((i-1)>=0)
                {
                    if(ar[i-1][j]=='W')
                    {
                        if(check[i-1][j]==1) check[i-1][j]=0;
                    }
                }
                if((j-1)>=0)
                {
                    if(ar[i][j-1]=='W')
                    {
                        if(check[i][j-1]==1) check[i][j-1]=0;
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(check[i][j]==0) ++count;
        }
    }
    cout<<count;
	return 0;
}


