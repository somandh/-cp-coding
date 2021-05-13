#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int factor_count=0;
    
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            factor_count=1;
            break;
        }
    }
if(factor_count==1)
    {
        cout<<"not prime";
    }
    else
        cout<<"prime";
}
