#include<iostream>
using namespace std ;
//factorial program
// int factorial(int n){
//     //base case 
//     if(n==0){
//         return 1;
//     }
//     int smallerproblem=factorial(n-1);
//     int biggerproblem=n*smallerproblem;
//     return biggerproblem;
// }
// int main(){
//     int n;
//       cout<<"enter number"<<endl;
//     cin>>n;

//     int ans=factorial(n);
//     cout<<ans<<endl;
// }
//power of no,

// int power(int n){
//     //base case 
//     if(n==0){
//         return 1;
//     }
//     int smallerproblem=power(n-1);
//     int biggerproblem=2*smallerproblem;
//     return biggerproblem;
// }
// int main(){
//     int n;
//       cout<<"enter number"<<endl;
//     cin>>n;

//     int ans=power(n);
//     cout<<ans<<endl;
// }
//print counting//
void counting(int n){
    if (n<1){
        return ;
    }
    else{
        cout<<n<<endl;
        counting(n-1);
    }
}
int main(){
    int n;
    cout<<"enter no."<<endl;
    cin>>n;
    counting(n);



}