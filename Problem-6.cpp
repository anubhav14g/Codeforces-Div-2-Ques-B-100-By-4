// Problem Link-
// https://codeforces.com/problemset/problem/451/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	long n;
    cin>>n;
    long ar[n],br[n];
    for(long i=0;i<n;i++)
    {
        cin>>ar[i];
        br[i]=ar[i];
    }
    sort(br,br+n);
    vector<long> check;
    for(long i=0;i<n;i++)
    {
        if(ar[i]!=br[i])
        {
            check.push_back(i);
        }
    }
    if(check.size()==0)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1;
    }
    else if(check.size()==1)
    {
        cout<<"yes"<<endl;
        cout<<check[0]<<" "<<check[0];
    }
    else
    {
        int f=0;
        long first=check[0],second=check[check.size()-1];
        while(first<=second)
        {
            long temp=ar[first];
            ar[first]=ar[second];
            ar[second]=temp;
            ++first;
            --second;
        }
        for(long i=0;i<n;i++)
        {
            if(ar[i]!=br[i])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<"yes"<<endl;
            cout<<check[0]+1<<" "<<check[check.size()-1]+1;
        }
        else cout<<"no"<<endl;
    }
	return 0;
}

