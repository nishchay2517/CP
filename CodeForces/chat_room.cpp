#include<iostream>
using namespace std;

int main()
{
    string h = "hello";
    string s;
    cin>>s;
    int j=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==h[j]){
            j++;
        }
        if(j==5){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";

    
    return 0;
}