#include <bits/stdc++.h>
using namespace std;

// int hexatodecimal(string s)
// {
//     int x=0,ans=0,y;
//     int n=s.size();
//     for(int i=n-1;i>=0;i--)
//     {
//         if(s[i]>='A' && s[i]<='F')
//         s[i]='A'+10;
//         cout<<s[i];
//     }
    // while(n>0)
    // {
    //     y= n%10;
    //     ans= ans + (y* pow(8,x));
    //     x++;
    //     n= n/10;
    // }
    // return ans;
    // }

int main()
{
    string s;
    cin>>s;
    int x=0,ans=0;
    int n=s.size();
    int a[n];
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]>='A' && s[i]<='F')
        {
        a[i]= s[i] ;
        //  cout<<a[i];
        a[i]=(a[i]-65)+10;
        // cout<<a[i];
        ans= ans + (a[i]* pow(16,x));
        //   cout<<ans<<endl;
        x++;
        }
        else
        // a[i]=s[i];
        // cout<<a[i];
        // a[i]=(a[i]-48);
        // cout<<a[i];
        ans= ans + (s[i]* pow(16,x)) - 48;
        //  cout<<ans<<endl;
        x++;
    }
    cout<<ans;
    return 0;
}