// #include<bits/stdc++.h>

// using namespace std;

// // class queue_normal{
// //     int front=-1;
// //     int rear=-1;
// //     int arr[10];
// //     public:
// //     void enqueue(int ele){
// //         if(!isFull()){
// //         rear++;
// //         arr[rear]=ele;
// //         }
// //         else
// //         cout<<"not possible its full"<<endl;
// //     }
// //     void dequeue(){
// //         if(!isEmpty()){
// //         front++;
// //         cout<<"Dequeue:"<<arr[front]<<endl;
// //         }
// //         else
// //         cout<<"not possible its empty"<<endl;
// //     }
// //     bool isEmpty(){
// //         if(rear==front){
// //             cout<<"Yess its empty"<<endl;
// //         return true;
// //         }
// //         else{
// //             cout<<"No its not empty"<<endl;
// //         return false;
// //         }
// //     }
// //     bool isFull(){
// //         if(rear==9 && front==-1){
// //             cout<<"Yess its Full"<<endl;
// //         return true;
// //         }
// //         else{
// //             cout<<"Noo its not full"<<endl;
// //         return false;
// //         }
// //     }
// //     void display(){
// //         cout<<"Queue is:"<<endl;
// //         if(front==-1)
// //         front=front+1;
// //         for(int i=front; i<=rear; i++){
// //             cout<<arr[i]<<endl;
// //         }

// //     }
// // };

// class queue_circular{
//     int front=-1;
//     int rear=-1;
//     int arr[6];
//     public:
//     void enqueue(int ele){
//         if(!isFull()){
//             if(rear==5){
//             rear=0;
//             arr[rear]=ele;
//             }
//             else{
//                 rear++;
//                 arr[rear]=ele;
//             }
//             cout<<"rear is:"<<rear;
//             cout<<"front is:"<<front;
//             if(front==-1)
//             front++;
//             cout<<endl;
//         }
//         else
//         cout<<"Queue is full"<<endl;
//     }
//     void dequeue(){
//         if(!isEmpty()){
//             if(front==5)
//             {
//                 front=0;
//                 cout<<"Dequeue :"<<arr[front]<<endl;
//             }
//             else{
//                 cout<<"Dequeue :"<<arr[front]<<endl;
//                 front++;
//             }
//             cout<<"rear is:"<<rear;
//             cout<<"front is:"<<front;
//             cout<<endl;
//         }
//         else
//         cout<<"Queue is Empty nothing to dequeue"<<endl;
//     }
//     bool isEmpty(){
//         if(rear==front){
//             // cout<<"Your circular queue is empty"<<endl;
//             return true;
//         }
//         else{
//         //    cout<<"Your circular queue is not empty"<<endl;
//             return false; 
//         }
//     }
//     bool isFull(){
//         if((rear==5 && front==-1) || rear==front-1){
//             // cout<<"Your circular queue is full"<<endl;
//             return true;
//         }
//         else{
//             // cout<<"Your circular queue is not full"<<endl;
//             return false;
//         }
//     }
//     void display(){
//         cout<<"Your Queue is:"<<endl;
//         // while(front<=rear){
//         //     cout<<arr[front]<<endl;
//         //     front++;
//         // }
//         // for(int i=front+1; i<=5; i++)
//         // cout<<arr[front]<<endl;
//         // for(int i=0; i<=rear; i++)
//         // cout<<arr[rear]<<endl;
//         for(int i=front; i!=rear; i++){
//             if(i==6)
//             i=0;
//             cout<<arr[i]<<endl;
//         }
//         cout<<arr[rear]<<endl;
//     }
// };

// int main(){
//     // queue_normal q;
//     // q.isEmpty();
//     // q.enqueue(10);
//     // q.enqueue(20);
//     // q.enqueue(30);
//     // q.enqueue(40);
//     // q.enqueue(50);
//     // q.enqueue(60);
//     // q.display();
//     // q.dequeue();
//     // q.dequeue();
//     // q.display();
//     // q.enqueue(80);
//     // q.isEmpty();
//     // q.isFull();
//     // q.enqueue(100);
//     // q.isFull();
//     // q.display();


//     queue_circular q1;
//     // q1.isEmpty();
//     // q1.isFull();
//     q1.enqueue(1);
//     q1.enqueue(2);
//     q1.enqueue(3);
//     q1.enqueue(4);
//     q1.enqueue(5);
//     q1.enqueue(6);
//     q1.display();
//     // q1.isFull();
//     // q1.isEmpty();
//     q1.dequeue();
//     q1.dequeue();
//     q1.dequeue();
//     // q1.isEmpty();
//     // q1.isFull();
//     q1.display();
//     q1.enqueue(7);
//     q1.enqueue(8);
//     q1.enqueue(9);
//     q1.enqueue(10);
//     q1.display();
//     return 0;
// }


//  SLIDING MAXIMUM WINDOW
#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> de;
    int k;
    cout<<"Enter k:"<<endl;
    cin>>k;
    int arr[]={};
    int i=0;
    while(i==7-k){
        int max=0;
    while(de.size()==k){
        de.push_back(arr[i]);
        i++;
    }
    for(int i=0;i<k;i++){
        deque[i];
    }
    cout<<max<<" ";
    de.pop_front();

    }

    return 0;
}