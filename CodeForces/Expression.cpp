#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    for(int i=0;i<3;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }

    vector<int> sol;
    for (int i = 0; i < 4; i++)
    {
        sol.push_back(v[0]+v[1]+v[2]);
        sol.push_back(v[0]+v[1]*v[2]);
        sol.push_back(v[0]*(v[1]+v[2]));
        sol.push_back(v[0]*v[1]*v[2]);
        sol.push_back((v[0]+v[1])*v[2]);
    };
    cout<< *max_element(sol.begin() , sol.end());
    return 0;
}