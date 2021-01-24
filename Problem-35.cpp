// Problem Link-
// https://codeforces.com/problemset/problem/155/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	int n;
    cin>>n;
    vector<pair<int,int>> pr;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        pr.push_back(make_pair(b,a));
    }
    sort(pr.begin(),pr.end());
    long count=pr[pr.size()-1].first;
    long ans=pr[pr.size()-1].second;
    for(int i=pr.size()-2;i>=0;i--)
    {
        if(count>0)
        {
            ans+=pr[i].second;
            count+=pr[i].first;
        }
        --count;
    }
    cout<<ans;
	return 0;
}




