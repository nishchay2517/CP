#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>store;
    for (int i = 0; i < t; i++)
    {

    int sum = 0;
    int n;    
    cin>>n;
    while (n!=1)
    {
        int eff;
        cin>>eff;
        sum = sum + eff;
        n--;
    }
    store.push_back(-(sum));
    }
    for(auto a:store){
        cout<<a<<endl;
    }
    return 0;
}