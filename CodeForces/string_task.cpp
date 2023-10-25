#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;

    string new_Str ="";
    transform(s.begin() , s.end() , s.begin() , ::tolower);
    for (int i = 0; i <s.length(); i++)
    {
        
        if (s[i]=='u' || s[i]=='y' || s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' )
        {
            continue;
        }
        else{
            new_Str.push_back('.');
            new_Str.push_back(s[i]);
        }
    }
    cout<<new_Str<<endl;
    

    return 0;
}