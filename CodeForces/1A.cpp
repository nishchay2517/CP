#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m,a;
    cin>>n>>m>>a;
    
    long long k = ceil(m/a);
    long long l = ceil(n/a);
    cout<<k*l;
    return 0;
}