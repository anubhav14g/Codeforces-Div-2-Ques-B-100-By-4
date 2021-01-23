// Problem Link-
// https://codeforces.com/problemset/problem/330/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	int n,m;
    cin>>n>>m;
    int visited[n+1];
    for(int i=1;i<=n;i++) visited[i]=0;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        visited[a]=1;
        visited[b]=1;
    }
    cout<<n-1<<endl;
    int co;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            co=i;
            break;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(i!=co)
        {
            cout<<co<<" "<<i<<endl;
        }
    }
	return 0;
}


