#include<iostream>
using namespace std;
//[print name n times using recursion
// void func(int i, int n){
//     if(i>n){
//         return;
//     }
//     else{
//         cout<<"raj"<<endl;
//         func(i+1,n);
//     }
// }
// int main(){
//     int n;
//     cout<<"enter no. of terms"<<endl;
//     cin>>n;
//     func(0,n);
// }
//tc-o(n)
//sc-o(n) 

//print linearly from 1 to n 
// void func( int i, int n){
//     if(i>n){
//        return;
//     } 
//     else{
//          cout<<i<<endl;
//         func(i+1,n);  
// }
// }
// int main(){
//     int n;
//     int i=1;
//     cout<<"enter no.of terms"<<endl;
//     cin>>n;
//     func(i, n);

// }
//print in terms of n to 1
// void func(int n,int i=1){
//     if(n<1){
//         return;

//     }
//     else{
//         cout<<n<<endl;
//         func(n-1,1);
//     }
// }
// int main(){
//     int n;
//     int i;
//     cout<<"no. of terems"<<endl;
//     cin>>n;
//     func(n,i);
// }
//print linearly from 1 to n (using backtrack)
void func(int i,int n){
    if(i<1){
        return;
    }
    func(i-1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    cout<<"enter no. of terms"<<endl;
    func(n,n);

}
//print linearly from n to 1(using backtrack)
void func(int i,int n){
    if()


}
int main(){
    int n;
    cin>>n;
    cout<<"enter no. of terms"<<endl;
    func(n,n);
}