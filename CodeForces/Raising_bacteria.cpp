#include<iostream>
using namespace std;
int main()
{
    long long int x;
    cin>>x;
    long long int total_bacteria = 1;
    
    while (total_bacteria < x)
    {
        if (total_bacteria*2 >x)
        {
            break;
        }        
        total_bacteria = total_bacteria*2;
        // cout<<total_bacteria<<endl;
    }
    cout<<total_bacteria*2<<endl;
    cout<<x- total_bacteria + 1<<endl;
    return 0;
}