#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int small = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (int(s[i])<=122 && int(s[i])>=97)
        {
            small = small +1;
        }   
    }
    if (small>=1)
    {
        cout<<s;
        return 0;
    }
    for(int i=0; i<s.length();i++)
    {
        if (int(s[i])<=122 && int(s[i])>=97)
        {
           s[i] = s[i] -32;
           cout<<s[i];
        }
        else if (int(s[i])>=65 && int(s[i])<=90)
        {
            s[i] = s[i] +32;
            cout<<s[i];
        }
        else{
            return 0;
        }
    }
    return 0;
}