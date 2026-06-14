#include<iostream>
#include<stack>
using namespace std;
// void solve(stack<int> &s,int target){
//     //base case
//     if(s.empty()){
//         s.push(target);
//         return;

//     }
//     int topele=s.top();
//     s.pop();
//     solve(s,target);
//     s.push(topele);

// }
// void insertatbottom(stack<int> &s){
//     if(s.empty()==true){
//         cout<<"stack is empty , can't oinsert at bottom"<<endl;
//         return;
//     }
//      int target=s.top();
//      s.pop();
//      solve(s,target);
    
// }
// //insert at bottom
// int main(){
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     s.push(60);
//     s.push(70);
   
//     insertatbottom(s);
//     cout<<"printing:"<<endl;
//     while(!s.empty()){
//         cout<<s.top()<<endl;
//         s.pop();
//     }
//     return 0;
// }
//reverse a stack
// void insertatbottom(stack<int>&s,int target){
//     if(s.empty()){
//         s.push(target);
//         return;

//     }
//     int topele=s.top();
//     s.pop();
//     insertatbottom(s,target);
//     s.push(topele);

// }
// void reversestack(stack<int> &s){
//     if(s.empty()){
//         return;
//     }
//     int target=s.top();
//     s.pop();
//     reversestack(s);
//     insertatbottom(s,target);

// }
// int main(){
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     s.push(60);
//     s.push(70);
//     reversestack(s);
//     cout<<"printing:"<<endl;
//     while(!s.empty()){
//         cout<<s.top()<<endl;
//         s.pop();
//     }
//     return 0;
// }


// insert ele in sorted stack
// void insertSorted(stack<int>&s,int target){
//     if(s.empty()){
//         s.push(target);
//         return;
//     }
//     if(s.top()>=target){
//         s.push(target);
//         return;

//     }
//     int topele=s.top();
//     s.pop();
//     insertSorted(s,target);
//     s.push(topele);

// }
// int main(){
//     stack<int> s;
// }


//sort a stack
// void insertSorted(stack<int>&s,int target){
//     if(s.empty()){
//         s.push(target);
//         return;
//     }
//     if(s.top()>=target){
//         s.push(target);
//         return;

//     }
//     int topele=s.top();
//     s.pop();
//     insertSorted(s,target);
//     s.push(topele);
// }
// void sortstack(stack<int> &s){
//     //base case
//     if(s.empty()){
//         return;
//     }
//     int topele=s.top();
//     s.pop();
//     sortstack(s);
//     insertSorted(s,topele);
// }
// int main(){
//     stack <int> s;
//     s.push(4);
//     s.push(2);
//     s.push(8);
//     s.push(5);
//     s.push(9);
//     sortstack(s);
//     cout<<"printing:"<<endl;
//     while(!s.empty()){
//         cout<<s.top()<<endl;
//         s.pop();
//     }
//     return 0;
// } 
   

  // remove redundant brackets
  
