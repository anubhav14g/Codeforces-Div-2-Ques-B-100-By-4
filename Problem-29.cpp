// Problem Link-
// https://codeforces.com/problemset/problem/34/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	int n,m;
    cin>>n>>m;
    int ar[n];
    vector<int> br;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]<0) br.push_back(abs(ar[i]));
    }
    long ans=0;
    if(m<=br.size())
    {
        sort(br.begin(),br.end());
        int count=0;
        for(int i=br.size()-1;i>=0;i--)
        {
            ++count;
            if(count>m) break;
            else
            {
                ans+=br[i];
            }
        }
    }
    else
    {
        for(int i=br.size()-1;i>=0;i--)
        {
            ans+=br[i];
        }
    }
    cout<<ans;
	return 0;
}


