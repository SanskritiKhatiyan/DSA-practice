#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,s,i,e;
    cin>>s;
    cin>>e;
    int arr[e];
    n=2;
    for(i=0;i<=e;i++)
    {
       arr[i]=i;
    }
    while((n*n)<e)
    {
        for(i=(n*n);i<=e;i++)
        {
            if(arr[i]%n==0)
            arr[i]=-1;
        }
        n++;
    }
    for(i=0;i<=e;i++)
    {
        // cout<<arr[i]<<" ";
        if(arr[i]==-1 || arr[i]<s)
        continue;
        else
        cout<<arr[i]<<" ";
    }
    return 0;
}