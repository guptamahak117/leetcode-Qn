#include<iostream>
#include<queue>
using namespace std;
// int main(){
//     queue<int> q; // creattion
//     q.push(2);
//     q.push(4);
//     q.push(6);
//     q.push(5);
//     q.push(9);
//      cout<<"size"<<q.size()<<endl;
//      //removal
//      q.pop();
//       cout<<"size"<<q.size()<<endl;
//        if(q.empty()){
//         cout<<"empty"<<endl;
//        }
//         else{
//             cout<<"not empty"<<endl;
//         }
//         cout<<q.front()<<endl;
//     return 0;
// }

//implement queue using vector/array (class queue)
// class Queue{
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;
//     Queue(int size){
//         this->size=size;
//         arr=new int[size];
//         front=0;
//         rear=0;

//     }
//     void push(int data){
// if(rear==size){
//     cout<<"stack is full"<<endl;

// }
//  else{
//     arr[rear]=data;
//     rear++;
//  }
//     }
//      void pop(){
//         if(rear==front){
//             cout<<"queue is empty";
//         }
//          else {
//              arr[front]=-1;
//              front++;
//              if(front==rear){
//                 front=0;
//                 rear=0;

//              }
//          }
//      }
//       int getfront(){
//         if(rear==front){
//             cout<<"queue is empty"<<endl;
//             return -1;
//         }
//          else{
//          return arr[front];
//          }
//       }
//       bool isempty(){
//         if(rear==front){
//             return true;
//         }
//         else{
//            return false;
//         }
//       }
//       int getsize(){
//          return rear-front;
//       }
// };
//  int main(){
//     Queue q(10);
//     q.push(2);
//      q.push(4);
//       q.push(5);
//        q.push(8);
//         q.push(7);
//          cout<<"si   ze"<<q.getsize()<<endl;
//           q.pop();
//            cout<<"size"<<q.getsize()<<endl;
//             cout<<"front ele"<<q.getfront()<<endl;
//            if(q.isempty()){
//             cout<<"empty"<<endl;
//            }
//             else{
//                 cout<<"not empty"<<endl;
//             }
            

//  }
//circular queue
class Queue{
    public:
    int size;
    int *arr;
    int front;
    int rear;
    Queue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;

    void push(int data){
        if((front==0&&rear=size-1)){
            cout<<"q is full,can't insert"<<endl;
        }//queue full
        else if(front==-1){
            front=rear=0;
            arr[rear]=data;

        }//single ele
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=data;

        }//circular
         else{
            rear++;
            arr[rear]=data;

         }//normal 

    }
    void pop(){
        if(front==-1){
            cout<<"can't pop"<<Endl;
        }
        else if(front==rear){
            arr[front]=-1;
            front =rear=-1;
        }
        else if(front==size-1){
            front =0;
        }
        else if(){
            front++;
        }
    }
    }


};
int main(){

}