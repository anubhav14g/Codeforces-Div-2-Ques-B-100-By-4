// Problem Link-
// https://codeforces.com/problemset/problem/509/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    int f=1,ma=INT_MIN,mi=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>ma) ma=ar[i];
        if(ar[i]<mi) mi=ar[i];
    }
    if((ma-mi)>k) cout<<"NO";
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            if(k>=ar[i])
            {
                int count=1;
                for(int j=1;j<=ar[i];j++)
                {
                    if(count>k) count=1;
                    cout<<count<<" ";
                    ++count;
                }
                cout<<endl;
            }
            else
            {
                int count=1;
                for(int j=1;j<=ar[i];j++)
                {
                    if(count>k) count=1;
                    cout<<count<<" ";
                    ++count;
                }
                cout<<endl;
            }
        }
    }
	return 0;
}

