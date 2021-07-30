#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;
};

void insertion_head(node* &head){
    int data;
    node* temp;
    cout<<"enter size"<<endl;
    int n;
    cin>>n;
    cout<<"enter values"<<endl;
    for(int i=0;i<n;i++){
    cin>>data;
    temp=head;
    node* newnode=new node;
    head=newnode;
    newnode->data=data;
    newnode->next=temp;

    }
}

void insertion_back(node* &head){
    int data;
    cout<<"Enter size"<<endl;
    int n;
    cin>>n;
    node* temp=new node;
    head=temp;
    cout<<"Enter values"<<endl;
    for(int i=0;i<n;i++){
        // cout<<"enter data"<<endl;
        cin>>data;
        temp->data=data;
        node* newnode= new node;
        temp->next=newnode;
        if(i==n-1)
        temp->next=NULL;
        else
        temp=newnode;
    }
    

}

void display(node* head){
    node* temp=head;
    cout<<"Linked List is: ";
    while(temp!=NULL){
        cout<<temp->data;
        cout<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int searching(node* head){
    int find;
    int pos=0, count=0;
    cout<<endl;
    cout<<"Enter number to be searched"<<endl;
    cin>>find;
    node* temp=head;
    while(temp!=NULL){
    if(temp->data==find)
    {
        count++;
        cout<<"The number is founded at pos:"<<pos+1<<endl;
        return pos+1;
        break;
    }
    else
    pos++;
    temp=temp->next;
    }
    if(count==0){
    cout<<"Element not found"<<endl;
    return count;
    }

}

void deletion_head(node* &head){
    cout<<"Deleting at head"<<endl;
    node* temp=head;
    head=head->next;
    delete temp;
}

void deletion_at_node(node* &head){
   int finding;
   node* temp=head;
   finding=searching(head);
   if(finding==0)
   cout<<"Hence can't delete"<<endl;
   else
  {
      cout<<"Deleted"<<endl;
      if(finding==1){
      head=head->next;
      delete temp;
      }
      else{
      for(int i=1;i<finding;i++){
           if(i==finding-1){
               node* anothertemp=temp;
               temp=temp->next;
               if(temp->next==NULL){
                   delete anothertemp->next;
                   anothertemp->next=NULL;
                   break;
               }
               temp=temp->next;
               delete anothertemp->next;
               anothertemp->next=temp;
            }
        temp=temp->next;
      }
      }
  }
}

void insert_cycle(node* &head){
    cout<<"Enter size"<<endl;
    int pos,n,data;
    cin>>n;
    cout<<"Where you want to insert cycle"<<endl;
    cin>>pos;
    node* cyclenode;
    cout<<"Enter values"<<endl;
    node* newnode=new node;
    head=newnode;
    for(int i=0;i<n;i++){
        if(i==pos){
            cyclenode=newnode;
        }
            cin>>data;
            newnode->data=data;
            newnode->next= new node;
            newnode=newnode->next;
    }
    newnode->next=cyclenode;

}

void detect_removal(node* head){
    node* hare=head;
    node* torto=head;
    int count=1;
    hare=hare->next->next;
    torto=torto->next;
    while(count!=0 && hare!=torto){
        hare=hare->next->next;
        torto=torto->next;
    }
    if(hare==torto)
    cout<<"Cycle detected"<<endl;
    else
    cout<<"Cycle not detected"<<endl;

    hare=head;
    while(hare->next!=torto->next)
    {
        hare=hare->next;
        torto=torto->next;
        count++;
    }
    cout<<"Found at position"<<count<<endl;
    torto->next=NULL;
    cout<<"Done removal of cycle"<<endl;

}

node* reverse_k_nodes(node* head, int k){
    int count=0;
    node* prev=NULL;
    node* nextpoint;
    node* current=head;
    while(nextpoint!=NULL && count<k){
        nextpoint=current->next;
        current->next=prev;
        prev=current;
        current=nextpoint;
        count++;
    }
    if(nextpoint!=NULL)
    head->next=reverse_k_nodes(nextpoint,k);
    return prev;

}

void append_k_nodes(node* &head){
    cout<<"How many nodes you want to append"<<endl;
    int k, count=0, i=1;
    cin>>k;
    node* temp=head;
    node* newtail=head;
    node* another;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    int pos=count-k;
    temp=head;
    while(temp!=NULL){
    if(i==pos){
        head=temp->next;
        another=temp;
        temp=temp->next;
        another->next=NULL;
        i++;
    }
    temp=temp->next;
    if(i==count-1)
    temp->next=newtail;
    i++;
    }
}

node* merge_two_linkedlist(node* head1, node* head2){
    node* newhead;
    node* newtemp;
   if((head1->data)>(head2->data)){
   newhead=head2;
   head2=head2->next;
   }
   else
   {
       newhead=head1;
       head1=head1->next;
   }
   newtemp=newhead;
   while(head1!=NULL || head2!=NULL){
       if(head1==NULL || head2==NULL){
       if(head1==NULL){
       newtemp->next=head2;
       head2=head2->next;
       newtemp=newtemp->next;
       }
       else{
       newtemp->next=head1;
       head1=head1->next;
       newtemp=newtemp->next;
       }
       }
       else{
       if((head1->data)>(head2->data)){
          newtemp->next=head2;
          head2=head2->next;
          newtemp=newtemp->next;
       }
       else if((head1->data)<(head2->data)){
           newtemp->next=head1;
           head1=head1->next;
           newtemp=newtemp->next;
       }
       }
   }
   newtemp->next=NULL;
    return newhead;
}

void odd_even(node* head){
    node* odd=head;
    if(odd->next!=NULL){
    node* even=head->next;
    node* evenstart=head->next;
    while(even->next!=NULL){
        odd->next=even->next;
        if(odd->next!=NULL)
        odd=odd->next;
        even->next=odd->next;
        if(even->next!=NULL)
        even=even->next;
    }
    odd->next=evenstart;
    }
}

void circular(node* head){
    node* temp=head;
    node* another=temp;
    while(temp!=NULL){
        another=temp;
        temp=temp->next;
    }
    another->next=head;
}

void display_circular(node* head){
    int n=15;
    cout<<"Circular Linked List is:";
    while(n!=0){
        cout<<head->data<<" ";
        head=head->next;
        n--;
    }

}

void insertion_of_intersection(node* head1, node* head2){
    cout<<"Where you want to insert the intesection point of two linked lists"<<endl;
    int inter;
    cin>>inter;
      int L1=0, L2=0, count=0;
      node* interpoint;
    node* temp1=head1;
    node* temp2=head2;
    while(head1!=NULL){
        L1++;
        head1=head1->next;
    }
    while(head2!=NULL){
        L2++;
        head2=head2->next;
    }
    int big=L1>L2?L1:L2;
    if(big==L1){
        while(count!=inter){
            temp1=temp1->next;
            count++;
            interpoint=temp1;
        }
        while(temp2->next!=NULL)
        temp2=temp2->next;
        temp2->next=interpoint;
    }
    else if(big==L2){
        while(count!=inter){
            temp2=temp2->next;
            count++;
            interpoint=temp2;
        }
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=interpoint;
    }

}

void detection_of_intersection_point(node* head1, node* head2){
    int L1=0, L2=0, count=0,pos=1;
    node* temp1=head1;
    node* temp2=head2;
    while(head1!=NULL){
        L1++;
        head1=head1->next;
    }
    while(head2!=NULL){
        L2++;
        head2=head2->next;
    }
    int diff=abs(L1-L2);
    int big=L1>L2?L1:L2;
    if(big==L1){
        while(count!=diff){
            temp1=temp1->next;
            count++;
        }
    }
    else if(big==L2){
        while(count!=diff){
            temp2=temp2->next;
            count++;
        }
    }
    while(temp1->next!=temp2->next && temp1->next!=NULL){
        temp1=temp1->next;
        temp2=temp2->next;
        pos++;
    }
  
    if(temp1->next==temp2->next)
    cout<<"Hurray!!! we get the intersection point at position"<<pos<<endl;
    else
    cout<<"Bad Luck!!! There is no point of intersection detected"<<endl;
}


// DOUBLY LINKED LIST
class dnode{
    public:
    dnode* pre;
    int data;
    dnode* next;
};

void doubly_insert_at_back(dnode* &dhead){
    int n, data;
    cout<<"Hey!! we are here for doubly linked list. Enter size"<<endl;
    cin>>n;
    cout<<"Enter values"<<endl;
    dhead=new dnode;
    dnode* prev=NULL;
    dnode* temp=dhead;
    for(int i=0;i<n;i++){
        cin>>data;
        temp->data=data;
        if(i==n-1)
        temp->next=NULL;
        else
        temp->next=new dnode;
        temp->pre=prev;
        prev=temp;
        temp=temp->next;
    }
}

void doubly_display(dnode* dhead){
    cout<<"Doubly Linked LIst:"<<endl;
    while(dhead!=NULL){
        cout<<dhead->data<<" ";
        dhead=dhead->next;
    }
}




int main(){
    // cout<<"how many node"<<endl;
    // int k;
    // cin>>k;
    node* head=NULL;
    dnode* dhead=NULL;
    node* head1=NULL;
    node* head2=NULL;
    // insertion_back(head);
    // insertion_head(head);
    // display(head);
    // searching(head);
    // deletion_head(head);
    // deletion_at_node(head);
    // reverse(head);
    // node* newhead=reverse_k_nodes(head,k);
    // insert_cycle(head);
    // display(head);
    // detect_removal(head);
    // display(newhead);
    // append_k_nodes(head);
    // display(head);
    // insertion_back(head1);
    // display(head1);
    // insertion_back(head2);
    // display(head2);
    // node* newhead= merge_two_linkedlist(head1, head2);
    // display(newhead);
    insertion_back(head1);
    insertion_back(head2);
    cout<<"Before intersection point"<<endl;
    display(head1);
    display(head2);
    // odd_even(head);
    // display(head);
    // circular(head);
    // display_circular(head);
    insertion_of_intersection(head1, head2);
    cout<<"After intersection point"<<endl;
    display(head1);
    display(head2);
    detection_of_intersection_point(head1, head2);







    // doubly Linked List
    // doubly_insert_at_back(dhead);
    // doubly_display(dhead);

    return 0;
}

