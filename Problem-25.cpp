// Problem Link-
// https://codeforces.com/problemset/problem/493/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	long n;
    cin>>n;
    long cr[n];
    long long int sum1=0,sum2=0;
    vector<long long int> ar,br;
    for(long i=0;i<n;i++)
    {
        cin>>cr[i];
        if(cr[i]>=0)
        {
            sum1+=cr[i];
            ar.push_back(cr[i]);
        }
        else
        {
            sum2+=abs(cr[i]);
            br.push_back(abs(cr[i]));
        }
    }
    if(sum1>sum2) cout<<"first";
    else if(sum1<sum2) cout<<"second";
    else
    {
        int f=0,ans;
        for(long i=0;i<min(ar.size(),br.size());i++)
        {
            if(ar[i]>br[i])
            {
                ans=1;
                f=1;
                break;
            }
            else if(ar[i]<br[i])
            {
                ans=2;
                f=1;
                break;
            }
            else continue;
        }
        if(f==1)
        {
            if(ans==1) cout<<"first";
            else cout<<"second";
        }
        else
        {
            if(ar.size()>br.size()) cout<<"first";
            else if(ar.size()<br.size()) cout<<"second";
            else
            {
                if(cr[n-1]>=0) cout<<"first";
                else cout<<"second";
            }
        }
    }
	return 0;
}


