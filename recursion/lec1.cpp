#include<iostream>
using namespace std;
// void func(){
//     cout<<"10"<<endl;
//     func();
// }
// int main(){
//     func();
//     return 0;

// }
// int count=0;
// void func(){
//     //without base cond
//     cout<<"count"<<count  <<endl;
//     count++;
// func();
// }
// int main(){
//     func();
// }
int count=0;
void func(){
    //with base cond
    if(count==4){
        return;
    }
    else{
    cout<<count<<endl;
    count++;
func();
}
}
int main(){
    func();
}