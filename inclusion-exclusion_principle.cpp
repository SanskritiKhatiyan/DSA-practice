#include<bits/stdc++.h>

using namespace std;

int main()
{
    int count=0,s,e,i,a,b;
    cin>>s>>e>>a>>b;
    for(i=s;i<=e;i++)
    {
        if(i%a==0)
        count++;
        else if(i%b==0)
        count++;
        else if(i%a==0 && i%b==0)
        count--;
    }
    cout<<count;
    return 0;
}