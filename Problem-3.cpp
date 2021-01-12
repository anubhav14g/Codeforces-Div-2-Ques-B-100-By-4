// Problem Link-
// https://codeforces.com/problemset/problem/467/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
vector<int> giveB(int num)
{
    vector<int> ar;
    while(num>0)
    {
        ar.push_back(num%2);
        num=num/2;
    }
    reverse(ar.begin(),ar.end());
    return ar;
}
 
void check(int num1,int num2,int &ans,int k,int n)
{
    vector<int> ar,br;
    ar=giveB(num1^num2);
    int count=0;
    for(int i=0;i<ar.size();i++)
    {
        if(ar[i]==1) ++count;
    }
    if(count<=k) ++ans;
}
 
int main()
{
	int n,m,k;
    cin>>n>>m>>k;
    int ar[m+1];
    for(int i=0;i<(m+1);i++)
    {
        cin>>ar[i];
    }
    int x=ar[m];
    int ans=0;
    for(int i=0;i<m;i++)
    {
        check(ar[i],x,ans,k,n);
    }
    cout<<ans;
	return 0;
}