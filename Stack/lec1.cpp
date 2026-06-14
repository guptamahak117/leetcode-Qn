#include<iostream>
#include<stack>
using namespace std;
// int main(){
    // stack<int> st;
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.pop();
    // cout<<"top elemnt:"<<st.top()<<endl;
    // cout<<"size of stack"<<st.size()<<endl;
    // if(st.empty()){
    //     cout<<"stack is empty"<<endl;

    // }
    // else{
    //     cout<<"stack is not empty"<<endl;
    // }

    // stack<int> s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // while(!s.empty()){
    //     cout<<s.top()<<endl;
    //     s.pop();

    // }
    // class  Stack{
    //     //create stack using dynamic array
    //     private:
    //     int *arr;
    //     int top;
    //     int size;
    //     public:
    //     Stack(int size){
    //         arr=new int[size];
    //         this->size=size;
    //         top=-1;

    //     }
    //     //func
    //     void push(int data){
    //         if(size-top>1){
    //             top++;
    //             arr[top]=data;

    //         }
    //         else{
    //             cout<<"stack overflow"<<endl;
    //         }

    //     }
    //     void pop(){
    //         if(top==-1){
    //             cout<<"stack underflow"<<endl;
    //         }
    //         else{
    //             top--;
    //         }

    //     }
    //     int getsize(){
    //         return top+1;

    //     }
    //     int gettop(){
    //         if(top==-1){
    //             cout<<"no ele exist"<<endl;
    //         }
    //         else{
    //             return arr[top];
    //         }
    //     }
    //     bool  isempty(){
    //         if(top==-1){
    //             return true;
    //         }
    //         else{
    //             return false;
    //         }

    //     }
    // };
    // int main(){
    //     Stack s(10);
    //     s.push(10);
    //     s.push(20);
    //     s.push(30);
    //     s.push(40);
    //     while(!s.isempty()){
    //         cout<<s.gettop()<<" ";
    //         s.pop();
    //     }
    //     cout<<"size of stack"<<s.getsize()<<endl;
    //     return 0;

    // }

    //create 2 stacks from one array
    // class Stack{
    //     public:
    //     int *arr;
    //     int size;
    //     int top1;
    //     int top2;
    //     Stack(int size){
    //         arr=new int[size];
    //         this->size=size;
    //         top1  =-1;
    //         top2=size;

    //     }
    //     void push1(int data){
    //         if(top2-top1==1){
    //             cout<<"overflow"<<endl;
    //         }
    //         else{
    //             top1++;
    //             arr[top1]=data;
    //         }

    //     }
    //     void pop1(){
    //         if(top1==-1){
    //             cout<<"stack underflow"<<endl;
    //         }
    //         else{
    //             top1--;
    //         }
    //     }
    //     void push2(int data){
    //         if(top2-top1==1){
    //             cout<<"overflow"<<endl;
    //         }
    //         else{
    //             top2--;
    //             arr[top2]=data;
    //         }
    //     }
    //     void pop2(){
    //         if(top2==size){
    //             cout<<"stack underflow"<<endl;
    //         }
    //         else{
    //             top2++; 
    //         }
    //     }
    // };
    // int main(){
    //     Stack s(5);

    // }

   // reverse string from stack
// int main(){
//     string str="mahakgupta";
//     stack<char> s;
//     for(int i=0;i<str.length();i++){
//         s.push(str[i]);
//     }
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();

//     }
//     cout<<endl;
//     return 0;

// }    

//middle element in stack
void printmiddle(stack<int> &s,int &totalsize){
    if(s.size()==0){
        cout<<"no ele in stack"<<endl;
    }
    //base case
    if(s.size()==totalsize/2+1){
        cout<<"middle ele:" <<s.top()<<endl;
        return;
    }
    int temp=s.top();
    s.pop();
    //recursive call
    printmiddle(s,totalsize);
    //backtrack
    s.push(temp);    
}
   int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    int totalsize=s.size();
    printmiddle(s,totalsize);
    return 0;
    
   }

// }