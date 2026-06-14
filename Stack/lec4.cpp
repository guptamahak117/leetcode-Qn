//next min element
// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// int main(){
// vector<int> input;
// input.push_back(2);
// input.push_back(6);
// input.push_back(1);
// input.push_back(5);
// vector<int>ans(input.size());
// stack<int> s;
// s.push(-1);
// for(int i=input.size()-1;i>=0;i--){
//     int curr=input[i];
//     while(s.top()>=curr){
//         s.pop();
//     }
//     ans[i]=s.top();
//     s.push(curr);

// }
// cout<<"printing"<<endl;
// for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
// }
// cout<<endl;
// }


//prev min ele-tc=0(n+n)=0(2n)=0(n)
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> prevsmallerelement(vector<int> &input){
    stack<int> s;
    s.push(-1);
vector<int>ans(input.size());
 //l to r
 for(int i=0;i<input.size();i++){
    int curr=input[i];
     while(s.top()>=curr){
        s.pop();
    }
     ans[i]=s.top();
    s.push(curr);

 }
 return ans;

}
int main(){

    vector<int> input;
input.push_back(2);
input.push_back(6);
input.push_back(1);
input.push_back(5);
vector<int> ans2=prevsmallerelement(input);
cout<<"printing"<<endl;
for(int i=0;i<input.size();i++){
    cout<<ans2[i]<<" ";
}
cout<<endl;

}

//largest area in histogram
//lc84
#include<iostream>
#include<vector>
#include<stack>
#include<limits.h>
using namespace std;
vector<int> prevsmallerelement(vector<int> &input){
    stack<int> s;
    s.push(-1);
vector<int>ans(input.size());
 //l to r
 for(int i=0;i<input.size();i++){
    int curr=input[i];
     while(s.top()!=-1&&input[s.top()]>=curr){
        s.pop();
    }
     ans[i]=s.top();
    s.push(i);

 }
 return ans;

}


vector<int> nextSmaller(vector<int> &input){
    stack<int> s;
    s.push(-1);
vector<int>ans(input.size());
 //l to r
 for(int i=0;i<input.size()-1;i--  ){
    int curr=input[i];
     while(s.top()!=-1&&input[s.top()]>=curr){
        s.pop();
    }
     ans[i]=s.top();
    s.push(i);

 }
 return ans;

}
int getRecatangularAreaHistogram(vector<int>&height){
    vector<int>prev=prevsmallerelement(height);
    vector<int>next=next
}
