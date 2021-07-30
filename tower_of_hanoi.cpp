#include<bits/stdc++.h>

using namespace std;

int toh(int n, char a, char b, char c){
   if(n==0)
   return 1;
   toh(n-1,a,c,b);
   cout<<a<<"to"<<b<<endl;
   toh(n-1,c,b,a);

}

int main(){
   int n;
   cin>>n;
   char a='A';
   char b='B';
   char c='C';
   cout<<"A is source  B is destination   C is helper"<<endl;
   toh(n,a,b,c);
}