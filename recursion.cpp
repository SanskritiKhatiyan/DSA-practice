#include<bits/stdc++.h>

using namespace std;

// ARRAY IS SORTED OR NOT(INCREASING ORDER)

// int n;
// bool sortarray(int arr[], int idx){
//     if(idx==n-1)
//     return true;
//     else if(arr[idx]<arr[idx+1]){
//     sortarray(arr,idx+1);
//     // return true;
//     }
//     else 
//     return false;
    

// }
// int main(){
//     cin>>n;
//     int arr[n],i;
//     for(i=0;i<n;i++)
//     cin>>arr[i];
//     bool s=sortarray(arr,0);
//     if(s==1)
//     cout<<"true";
//     else 
//     cout<<"false";
//     return 0;
// }



// INCRESING DECRESING

// int pdi(int n)
// {
//     if(n==0)
//     return 0;
//     cout<<n;
//     int b=pdi(n-1);
//     cout<<n;
// }
// int main(){
//     int n;
//     cin>>n;
//     pdi(n);
//     return 0;
// }



// FACTORIAL

// int fact(int n){
//     if(n==1)
//     return 1;
//     return n*fact(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fact(n);
//     return 0;
// }



// LOGARITHMIC POWER

// int power(int x, int n){
//     if(n==1)
//     return x;
//     else if(n%2==0)
//     return power(x,(n/2))*power(x,(n/2));
//     else if (n%2!=0)
//     return power(x,(n/2))*power(x,(n/2))*x;
// }
// int main(){
//     int x,n;
//     cin>>x;
//     cin>>n;
//     cout<<power(x,n);
//     return 0;
// }



// PRINTING ARRYA THROUGH RECURSION

// int n;
// int arrayw(int arr[],int idx){
//     int max=0;
//     if(idx==-1)
//     return 1;
//     //  cout<<arr[idx];
//     arrayw(arr,idx-1);
//     // cout<<arr[idx];
//     max=max<arr[idx]?arr[idx]:max;
//     return max;
// }
// int main(){
//     int i,idx,getmax;
//     cin>>n;
//     int arr[n-1];
//     for(i=0;i<n;i++)
//     cin>>arr[i];
//     getmax=arrayw(arr,n-1);
//     cout<<getmax;
//     return 0;
// }



// FIRST INDEX OF OCCURENCE

// int n;
// int firstindex(int arr[],int idx,int f){
//     if(idx==n)
//     return -1;

//     if(arr[idx]==f)
//     return idx;
//     else
//     return firstindex(arr,idx+1,f);
    
// }
// int main(){
//     int i,f;
//     cin>>f;
//     cin>>n;
//     int arr[n-1];
//     for(i=0;i<n;i++)
//     cin>>arr[i];
//     int m=firstindex(arr,0,f);
//     cout<<m;
//     return 0;
// }



// LAST INDEX OF OCCURENCE

// int n;
// int lastindex(int arr[],int idx,int f){
//     if(idx==0)
//     return -1;
//     int last=lastindex(arr,idx-1,f);
//     if(arr[idx]==f)
//     return idx;
//     else
//     return last;
    
// }
// int main(){
//     int i,f;
//     cin>>f;
//     cin>>n;
//     int arr[n-1];
//     for(i=0;i<n;i++)
//     cin>>arr[i];
//     int m=lastindex(arr,n,f);
//     cout<<m;
//     return 0;
// }



// ALL INDEX OF OCCURENCE

// int n;
// int allindex(int arr[],int idx,int f,int count){
//     if(idx==n)
//     return -1;
//     if(arr[idx]==f){
//     cout<<idx<<endl;
//     count=count+1;
//     }
//     allindex(arr,idx+1,f,count);
//     return count;
// }
// int main(){
//     int i,f;
//    int count=0;
//     cin>>f;
//     cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++)
//     cin>>arr[i];
//     int mount=allindex(arr,0,f,count);
//     if(mount==0)
//     cout<<"-1";
//     return 0;
// }



// PRINTING SUBSEQUENCE

// int subse(string s,int idx){
//     if(idx==s.size())
//     return 0;
//    cout<<subse(s,idx+1)<<endl;
//    cout<<s[idx]<<subse(s,idx+1)<<endl;
// }
// int main(){
//     string s;
//     cin>>s;
//     subse(s,0);
//     return 0;
// }




// printing STAIRS PATH

// int stairs(int n){
//     if(n==1 || n==2)
//     return n;
//     else if(n==3)
//     return 4;
//    return stairs(n-3)+stairs(n-2)+stairs(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<stairs(n);
//     return 0;
// }



// MAZE PATHS

// int maze(int r,int c,int n,int m){
//     if(r==n-1 && c==m-1)
//     return 1;
//     else if(r>=n || c>=m)
//     return 0;
//     return maze(r,c+1,n,m)+maze(r+1,c,n,m);
 
// }

// int main(){
//     int n=3,m=3,r=0,c=0;
//    cout<<maze(r,c,n,m);
//     return 0;
// }



//REPLACING pi WITH 3.14

// int n;
// int arrayw(char arr[],int idx){
//     if(idx==-1)
//     return 1;
//     arrayw(arr,idx-1);
//     if(arr[idx]=='p' && arr[idx+1]=='i')
//     cout<<"3.14";
//     else
//     cout<<arr[idx];
// }
// int main()
// {
//     cin>>n;
//     char arr[n];
//     for(int i=0;i<n;i++)
//     cin>>arr[i];
//     cout<<arrayw(arr,n-1);
//     return 0;
// }



// REMOVE ALL DUPLICATES

// int remuv(string s)
// {
//     if(s.length()==0)
//     return 1;
//     if(s[0]==s[1])
//     remuv(s.substr(1));
//     else{
//     cout<<s[0];
//     remuv(s.substr(1));}
// }

// int main(){
//     string s;
//     cin>>s;
//     remuv(s);
//     return 0;
// }



// KEYPAD OF MOBILE PROBLEM
string a[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int key(string b)
{
    if(b.length()==0)
    return 1;
    char num=b[0];
    string trum = a[num- '0'];
    // cout<<trum[0];
    for(int i=0; i<trum.length(); i++)
    {
        // cout<<trum[i];
        key(b.substr(1));
        cout<<trum[i];
        // cout<<endl;
        //  cout<<trum[i];
    }
    // cout<<endl;
}

int main()
{
//    int i;
//     int n;
//     cin>>n;
//     int s[10];
//     for(int i=0;i<=n;i++)
//     cin>>s[i];
    string s;
    cin>>s;
    key(s);
    return 0;
}