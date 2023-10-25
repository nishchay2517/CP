#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int s;
    vector<pair<int , int>> v;
    cin>>s>>n;
    int k = n;
    int cnt = 0;
    while (n!=0)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        n--;
    }
    sort(v.begin(),v.end());

    for (int i = 0; i < k; i++)
    {
        if (v[i].first < s )
        {
            s = s + v[i].second;
            cnt++;
        }
        
    }
    
    
    if (cnt == k)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    
    return 0;
}