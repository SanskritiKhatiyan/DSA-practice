#include<bits/stdc++.h>

using namespace std;

// void DecimaltoBinary(int n)
// {
//     int y[100],i=0;
//     while(n>=0)
//     {
//         y[i]=n%2;
//         n=n/2;
//         i++;
//     }
//     for(int j=i-1;j>=0;j--)
//     {
//         cout<<y[j];
//     }
// }

int main()
{
    int n;
    cin>>n;
    // DecimaltoBinary(n);
    int y[100],i=0;
    while(n>=0)
    {
        y[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<y[j];
    }

    return 0;
}