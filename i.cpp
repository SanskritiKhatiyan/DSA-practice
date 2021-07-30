#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;

     void insert(node* &head,int val)
     {
        node* ptr=new node();
        ptr->data=val;
        node* temp=head;
        
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=NULL;
        
     }

     void traverse(node* head)
     {
         while(head!=NULL)
         {
             cout<<head->data<<"->";
             head=head->next;
         }
         cout<<"NULL"<<endl;
     }
     void makecycle(node* head,int pos)
     {
        node* temp=head;
        node* ptr;
        int index=1;
        while(temp->next!=NULL)
        {
            if(index==pos)
            {
                ptr=temp;
            }
            temp=temp->next;
            index++;
        }
          temp->next=ptr;

     }
     bool detectcycle(node* head)
     {
       node* slow=head;
       node* fast=head;
       while( fast!=NULL && fast->next!=NULL)
       {
         slow=slow->next;
         fast=fast->next->next;
         if(slow==fast)
         {
            // cout<<"1";
             return 1;
         }
       }
      // cout<<"0";
       return 0;
      }
      void removecycle(node* head)
      {
          node* slow=head;
          node* fast=head;
          do
          {
             slow=slow->next;
             fast=fast->next->next; 
          } while (slow!=fast);

          fast=head;
          while(fast->next!=slow->next)
          {
               slow=slow->next;
               fast=fast->next;

          }
          slow->next=NULL;

          
      }
};

int main()
{
    node* head=new node();
    head->next=NULL;
    head->data=0;
    node obj;
   obj. insert(head,1);
   obj. insert(head,2);
   obj. insert(head,3);
   obj. insert(head,4);
   obj. insert(head,5);
  obj. traverse(head);
//   obj.makecycle(head,2);
// obj. traverse(head);
  cout<<obj.detectcycle(head)<<endl;
 //obj.removecycle(head);
 //obj. traverse(head);



    return 0;
}