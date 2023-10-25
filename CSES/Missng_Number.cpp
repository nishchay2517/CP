#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long sum_n = n*(n+1)/2;
    long long sum = 0;
    for (int i = 0; i < n-1; i++)
    {
        long long num;
        cin>>num;
        sum = sum +num;
    }
    cout<<sum_n - sum;        
    return 0;
}