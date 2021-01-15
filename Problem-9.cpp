// Problem Link-
// https://codeforces.com/problemset/problem/508/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	string s;
    cin>>s;
    long count=0;
    vector<long> ar;
    for(long i=0;i<s.length();i++)
    {
        long x=s[i]-'0';
        ar.push_back(x);
        if(x%2==0) ++count;
    }
    if(count==0) cout<<-1<<endl;
    else
    {
        long last=s[s.length()-1]-'0';
        int f=0;
        for(long i=0;i<ar.size()-1;i++)
        {
            if(ar[i]%2==0)
            {
                if(last>ar[i])
                {
                    long temp=ar[i];
                    ar[i]=last;
                    ar[ar.size()-1]=temp;
                    f=1;
                    break;
                }
            }
        }
        if(f==0)
        {
            for(long i=ar.size()-2;i>=0;i--)
            {
                if(ar[i]%2==0)
                {
                    long temp=ar[i];
                    ar[i]=last;
                    ar[ar.size()-1]=temp;
                    f=1;
                    break;
                }
            }
        }
        long ans=0,count=pow(10,ar.size()-1);
        for(long i=0;i<ar.size();i++)
        {
            cout<<ar[i];
        }
    }
	return 0;
}


