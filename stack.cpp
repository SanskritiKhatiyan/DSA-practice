// NOT OPTIMIZE CODE INSHORT BADCODE

// #include<bits/stdc++.h>

// using namespace std;

// int arr[10];
// int brr[10];
// int btop=-1;
// int top=-1;

// // PUSH 
// void push(int ele){
//     top++;
//     arr[top]=ele;
// }

// // POP
// void pop(){
    
//     cout<<"Element deleted is:"<<arr[top]<<endl;
//     top--;
// }

// // ISEMPTY
// void isEmpty(){
//     if(top==-1)
//     cout<<"Stack is empty"<<endl;
//     else
//     cout<<"Stack is not empty"<<endl;
// }

// // ISFULL
// void isfull(){
//     if(top==9)
//     cout<<"Stack overflow"<<endl;
//     else
//     cout<<"Stack is normal no overflow"<<endl;
// }

// // REVERSE
// void reverse(){
//     int ele;
//     while(top!=-1){
//     btop++;
//     ele=arr[top];
//     brr[btop]=ele;
//     top--;
//     }
//     cout<<"Reverse of given stack is: ";
//     while(btop!=-1)
//     {
//         cout<<brr[btop]<<" ";
//         btop--;
//     }
//     cout<<endl;
// }

// // REVERSE USING RECURRSION
// void recursion_reverse(int top){
//     if(top==-1)
//     return ;
//     recursion_reverse(top-1);
//     cout<<arr[top]<<" ";
// }

// // DISPLAY
// void display(){
//     int temp=top;
//     cout<<"Stack is: ";
//     while(temp!=-1){
//     cout<<arr[temp]<<" ";
//     temp--;
//     }
//     cout<<endl;
// }

// int main(){
//     push(6);
//     push(5);
//     push(4);
//     push(3);
//     push(2);
//     push(1);
//     display();
//     // reverse();
//     cout<<"Reverse of stack using recursion is: ";
//     recursion_reverse(top);
//     // pop();
//     // pop();
//     // pop();
//     // push(7);
//     // push(8);
//     // isEmpty();
//     // display();
//     // isfull();

//     return 0;
// }


// BETTER CODE

// #include<bits/stdc++.h>

// using namespace std;

// class stackc{
//     int top=-1;
//     int arr[10];
//     public:
//     void push(int val){
//         if(isFull())
//         cout<<"OOPS!!Stack is full"<<endl;
//         else{
//             top++;
//             arr[top]=val;
//         }
//     }
//     void pop(){
//        if(isEmpty())
//        cout<<"OOPS!!! Stack is empty nothing to pop out"<<endl;
//        else{
//            cout<<"Popped out element is "<<arr[top]<<endl;
//            top--;
//        }
//     }
//     bool isEmpty(){
//         if(top==-1)
//         return true;
//         else 
//         return false;
//     }
//     bool isFull(){
//         if(top==9)
//         return true;
//         else 
//         return false;
//     }
//     void display(){
//         cout<<"Your Stack is ";
//         for(int i=top;i>=0;i--){
//         cout<<endl;
//         cout<<arr[i];
//         }
//         cout<<endl;
//     }
//     void reverse(){
//     cout<<"Reverse of the stack is"<<endl;
//     for(int i=0;i<=top;i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }
// };


// int main(){
//     stackc s;
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     s.display();
//     s.reverse();
//     s.pop();
//     s.pop();
//     s.isEmpty();
//     s.isFull();
//     s.display();
//     s.reverse();
//     return 0;
// }

// EVERYONES'S FOLLOWING APPROACH

#include<bits/stdc++.h>

using namespace std;

// PREFIX EVALUATION
void prefix_evaluate(string prefix, stack<int> s){
    reverse(prefix.begin(),prefix.end());
    for(int i=0; i<prefix.length(); i++)
    {
        if(prefix[i]>='0' && prefix[i]<='9'){
            s.push(prefix[i]-'0');
        }
        else{
            int x=s.top();
            s.pop();
            int y=s.top();
            s.pop();
            switch(prefix[i]){
                case '+':
                s.push(x+y);
                break;
                case '-':
                s.push(y-x);
                break;
                case '*':
                s.push(x*y);
                break;
                case '/':
                s.push(y/x);
                break;
                case '^':
                s.push(pow(x,y));
                break;
            }
        }
    }
   cout<<s.top();
}

// POSTFIX EVALUATION
// JUST DONT REVERSE THE STRING AND WHOLE CODE IS SAME AS OF PREFIX


// INFIX TO POSTFIX
int precedence(char a){
    if(a=='^')
    return 3;
    else if(a=='/' || a=='*')
    return 2;
    else if(a=='+' || a=='-')
    return 1;
}

void infix_to_postfix(string infix){
    stack<char> s;
    for(int i=0;i<infix.length();i++){
        if(infix[i]=='(')
        s.push(infix[i]);
        else if(infix[i]>=0 && infix[i]<=9)
        cout<<infix[i]<<" ";
        else if(infix[i]==')'){
            while(s.top()!='('){
            cout<<s.top()<<" ";
            s.pop();
            }
            if(s.top()==')')
            s.pop();
        }
        else 
        {
            while(!s.empty() && precedence(infix[i])<=precedence(s.top()) && s.top()!='(')
            {
                cout<<s.top()<<" ";
                s.pop();
            }
            s.push(infix[i]);
        }
    }
    while(!s.empty()){
        if(s.top()=='(')
        s.pop();
        else{
        cout<<s.top()<<" ";
        s.pop();
        }
    }
}

void infix_to_prefix(string infix){
    reverse(infix.begin(), infix.end());
    for(int i=0;i<infix.length();i++){
        if(infix[i]=='(')
        infix[i]=')';
        else if(infix[i]==')')
        infix[i]='(';
    }
    string prefix;
    stack<char> s;
    for(int i=0;i<infix.length();i++){
        if(infix[i]=='(')
        s.push(infix[i]);
        else if(infix[i]>=0 && infix[i]<=9)
        cout<<infix[i]<<" ";
        else if(infix[i]==')'){
            while(s.top()!='('){
            // cout<<s.top()<<" ";
            prefix+=s.top();
            s.pop();
            }
            if(s.top()==')')
            s.pop();
        }
        else 
        {
            while(!s.empty() && precedence(infix[i])<=precedence(s.top()) && s.top()!='(')
            {
                // cout<<s.top()<<" ";
                prefix+=s.top();
                s.pop();
            }
            s.push(infix[i]);
        }
    }
    while(!s.empty()){
        if(s.top()=='(')
        s.pop();
        else{
        // cout<<s.top()<<" ";
        prefix+=s.top();
        s.pop();
        }
    }
    reverse(prefix.begin(), prefix.end());
    for(int i=0;i<prefix.length();i++)
    cout<<prefix[i]<<" ";
}


// BALANCED PARENTHESIS 
bool isOpen(char a){
    if(a=='(' || a=='{' || a=='[')
    return true;
    else 
    return false;
}
bool isClose(char a){
    if(a==')' || a=='}' || a==']')
    return true;
    else 
    return false;
}
int priority(char a){
    if(a=='(' || a==')')
    return 1;
    else if(a=='{' || a=='}')
    return 2;
    else if(a=='[' || a==']')
    return 3;
    }
void parenthesis(string p){
    stack<char> c;
    int count=0;
    for(int i=0;i<=p.length();i++){
    if(isOpen(p[i]))
    c.push(p[i]);
    else if(isClose(p[i])){
        if(priority(p[i])==priority(c.top())){
            c.pop();
        }
        else 
        count++;
    }
    }
    if(count>0)
    cout<<"Not a valid balanced expression"<<endl;
    else
    cout<<"A valid balanced expression"<<endl;

}

int main(){
    stack<int> s;
    string prefix, infix, postfix, expression;
    // cout<<"Enter the prefix expression"<<endl;
    // cin>>prefix;
    // cout<<"Answer after evaluation is:";
    // prefix_evaluate(prefix, s);
    // cout<<"Enter infix:"<<endl;
    // cin>>infix;
    // cout<<"Infix converted to postfix:";
    // infix_to_postfix(infix);
    // cout<<"Infix converted to prefix:";
    // infix_to_prefix(infix);
    cout<<"Expression for balanced parenthsis:";
    cin>>expression;
    parenthesis(expression);
    
    return 0;
}
