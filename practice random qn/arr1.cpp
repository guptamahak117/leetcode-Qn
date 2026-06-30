#include<iostream>
using namespace std;
//linearsearch
// bool linearsearch(int arr[],int size, int key){
    
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return true;
//         }
        
//     }
//     return false;
// }
// int main(){
//     int arr[5]={2,5,7,9,4};

 
//    if(linearsearch(arr,5,5)){
//     cout<<"found"<<endl;
//    }
//    else{
//     cout<<"not found"<<endl;
//    }

//     return 0;
// }

//count 0's and 1's

// int main(){

//     int arr[]={0,1,0,1,1,1,1,0,0,0,0,0,1,1,0,0};
//     int size=16;
//     int numzero=0;
// int numone=0;
// for(int i=0;i<size;i++){
//     if(arr[i]==0){
//         numzero++;
//     }
//     else{
//         numone++;
//     }
// }
// cout<<"numzero:"<<numzero<<endl;
// cout<<"numone:"<<numone<<endl;
//     return 0;
// }

//maximum number
// int main(){
//     int arr[]={2,4,1,6,8,0};
//     int size=7;
//     int max=arr[0];
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }

//     }
//     cout<<max<<endl;
// }

//reverse an array
int main(){
    //using inbuilt func
    int arr[]={2,6,8,4,6};
    int size=5;
    int start=0;
    int end=size-1;
    while(start<=end){
        // swap(arr[start],arr[end]);
        //without using swap func
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;

    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
