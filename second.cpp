# include<iostream>

using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
       for(j=1;j<=5-i;j++)
       {
           cout<<" ";
       }
       for(j=i;j>=1;j--)
       {
           cout<<j;
       }
       for(j=2;j<=i;j++)
       {
           if(i==1)
           cout<<" ";
           else 
           cout<<j;
       }
       cout<<endl;
    }
}