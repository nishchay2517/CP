#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long moves;
    int arr[n];
    for (int i = 0; i <  n ; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i+1]<arr[i])
        {
        while (arr[i+1]!=arr[i])
        {
            arr[i+1]++;
            moves++;
        }
        }
    }
    
    cout<<moves;
    
    return 0;
}