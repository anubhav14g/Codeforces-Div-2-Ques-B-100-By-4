// Problem Link-
// https://codeforces.com/problemset/problem/133/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
typedef long long int lld;
using namespace std;
 
lld fastPower(lld base,lld expo,lld modg) {
  lld res=1; 
  base=base%modg; 
  if(base==0)
  return 0;
  while(expo>0)  
    {  if(expo&1)  
        res=(res*base)%modg;  
       expo=expo>>1;  
       base=(base*base)%modg;  
    }  
    return res;   
}
 
int main()
{
	string p;
    cin>>p;
    lld ans=0,count=0,val;
    string a="";
    for(int i=0;i<p.length();i++)
    {
        if(p[i]=='>') a.append("1000");
        else if(p[i]=='<') a.append("1001");
        else if(p[i]=='+') a.append("1010");
        else if(p[i]=='-') a.append("1011");
        else if(p[i]=='.') a.append("1100");
        else if(p[i]==',') a.append("1101");
        else if(p[i]=='[') a.append("1110");
        else a.append("1111");
    }
    for(long i=a.length()-1;i>=0;i--)
    {
        val=fastPower(2,count,1000003);
        if(a[i]=='0') val*=0;
        else val*=1;
        ans+=val%1000003;
        ++count;
    }
    cout<<ans%1000003;
	return 0;
}


