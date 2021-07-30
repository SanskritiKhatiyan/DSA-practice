#include <bits/stdc++.h>

using namespace std;
 
// int main()
// {
//     int n,pos,x;
//     cin>>n;
//     cin>>pos;
//     x=n<<pos;
//     if( (n&x) ==0)
//     cout<<"this bit is 0";
//     else
//     cout<<"this bit is 1";
//     return 0;
// }

int main()
{
    int i,j;
  
    int arr[3]={1,2,3};
    
    for(i=0;i<(1<<3);i++)
    {
        cout<<"{";
        for(j=0;j<3;j++)
        {
            if((i & (1<<j))>0)
            cout<<arr[j];
        }
        cout<<"}";
        cout<<endl;
        }
    return 0;
}