// Problem Link-
// https://codeforces.com/problemset/problem/492/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
typedef long long int lld;
using namespace std;
 
int main()
{
	lld n,l;
    cin>>n>>l;
    double ar[n];
    for(lld i=0;i<n;i++) cin>>ar[i];
    vector<double> ans;
    double left,right;
    sort(ar,ar+n);
    for(lld i=0;i<n;i++)
    {
        if(i==0)
        {
            if((i+1)<n)
            {
                left=(ar[i]-0);
                right=(ar[i+1]-ar[i])/2;
                ans.push_back(max(left,right));
            }
            else
            {
                left=(ar[i]-0);
                right=(l-ar[i]);
                ans.push_back(max(left,right));
            }
        }
        else if(i==(n-1))
        {
            if((i-1)>=0)
            {
                left=(ar[i]-ar[i-1])/2;
                right=(l-ar[i]);
                ans.push_back(max(left,right));
            }
            else
            {
                left=(ar[i]-0);
                right=(l-ar[i]);
                ans.push_back(max(left,right));
            }
        }
        else
        {
            left=(ar[i]-ar[i-1])/2;
            right=(ar[i+1]-ar[i])/2;
            ans.push_back(max(left,right));
        }
    }
    sort(ans.begin(),ans.end());
    printf("%.10f",ans[ans.size()-1]);
	return 0;
}