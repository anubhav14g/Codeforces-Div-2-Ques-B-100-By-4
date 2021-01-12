// Problem Link-
// https://codeforces.com/problemset/problem/478/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	long long int n,m,ma,mi,x,y;
    cin>>n>>m;
    x=n-(m-1);
    ma=(x*(x-1))/2;
    if(n%m==0)
    {
        y=n/m;
        mi=((y*(y-1))/2)*m;
    }
    else
    {
        y=n/m;
        mi=((y*(y-1))/2)*(m-n%m);
        mi+=((y*(y+1))/2)*(n%m);
    }
    cout<<mi<<" "<<ma;
	return 0;
}