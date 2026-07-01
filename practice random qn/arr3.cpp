#include<iostream>
using namespace std;
// int main(){
//     int arr[3][3];
    
//     cout<<"enter ele in arr"<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];

//         }
//     }
//     cout<<"printing ele"<<endl;
//       for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
    
// }

// //row sum print
// int main(){
//     int arr[3][3];
//     int sum=0;
    
//     cout<<"enter ele in arr"<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];

//         }
//         cout<<endl;
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             sum=sum+arr[i][j];
//         }
//         cout<<"row sum"<<sum<<endl;
//         sum=0;
//     }
// }
//linear search
// int main(){
//     int key=8;
//     int a[3][3]={1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(a[i][j]==key){
//                 cout<<i<<" "<<j<<endl;
//             }
//         }
//     }
// }
//max and min
// int main(){
//      int a[3][3]={1,2,3,4,5,6,7,8,9};
//      int max=-1;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(a[i][j]>max){
//                 max=a[i][j];
//             }

//         }
//     }
//     cout<<max;
// }
// #include<limits.h>

// int main(){
//      int a[3][3]={1,2,3,4,5,6,7,8,9};
//      int min=INT_MAX;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(a[i][j]<min){
//                 min=a[i][j];
//             }

//         }
//     }
//     cout<<min;
// }

//transpose of matrix
// void transpose(int a[][3],int rows,int cols,int transposearr[][3]){
//         for(int i=0;i<3;i++){
//            for(int j=0;j<3;j++){
//             transposearr[j][i]=a[i][j];
//            }
//         }
//         for(int i=0;i<3;i++){
//            for(int j=0;j<3;j++){
//                cout<<transposearr[i][j];
//            }
//            cout<<endl;
//         }
//     }
// int main(){
//     int a[3][3];
//     int transposearr[3][3];
//     cout<<"enter ele in arr"<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>a[i][j];

//         }
//         cout<<endl;
//     }
//     transpose(a,3,3,transposearr);
// }

//sort 0's 1's 2's//