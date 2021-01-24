// Problem Link-
// https://codeforces.com/problemset/problem/282/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	long n;
    cin>>n;
    string ans;
    long sum1=0,sum2=0;
    for(long i=0;i<n;i++)
    {
        long a,b;
        cin>>a>>b;
        	if(((sum1+a)-sum2)<=500)
            {
                sum1+=a;
                ans.push_back('A');
            }
            else
            {
                sum2+=b;
                ans.push_back('G');
            }
    }
    cout<<ans;
	return 0;
}





