#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int tm = 0;
        int cursor = 1;

        for (int i = 0; i < s.length(); i++)
        {

            if (s[i]=='0')
            {
            tm += abs((10)-cursor )+1;
            cursor = 10;
            }
            else{
            tm += abs((s[i]-'0')-cursor)+1;
            cursor = s[i]-'0';
            }
            

        }
        cout<<tm<<endl;
    }
    return 0;
}