#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int islucky(int num){
    string lucky = to_string(num);
    int cnt=0;
    for (int i = 0; i < lucky.size(); i++)
    {
        if (lucky[i]=='4' || lucky[i]=='7')
        {
            cnt++;
        }
    }
    if (cnt==lucky.size())
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> v; 
    for (int i = 1; i <=sqrt(n); i++)
    {
        if(n%i == 0){
            v.push_back(i);
            v.push_back(n/i);
        }
    }


    int cnt2 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (islucky(v.at(i))==1)
        {
            cnt2++;
        }
    }
    if (cnt2>0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;

}