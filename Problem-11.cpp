// Problem Link-
// https://codeforces.com/problemset/problem/507/B

// Solution-

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
	long r,x1,y1,x2,y2;
    cin>>r>>x1>>y1>>x2>>y2;
    double ans=sqrt(pow(abs(x2-x1),2)+pow(abs(y2-y1),2));
    long y=ceil(ans/(2*r));
    cout<<y<<endl;
	return 0;
}

