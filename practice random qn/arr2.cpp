#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//find unique ele 
// void sortele(vector<int>arr,int size){
//     sort(arr.begin(),arr.end());
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int i=0;
//     int j=i+1;
//     while(i<arr.size()-1){
//         if(arr[i]!=arr[j]){
//             cout<<"uniqueele:"<<arr[i]<<endl;
//             return;
//         }
//            i=i+2; 
//     }

//     cout<<"uniqueele:"<<arr[arr.size()-1]<<endl;


// }
// int main(){
//     int n;
//     cout<<"enter size of array"<<endl;
//     cin>>n;
//     cout<<"enter elements of array"<<endl;
//     vector<int>arr(n);
//     for(int i=0;i<arr.size();i++){
//         cin>>arr[i];
//     }
//     sortele(arr,n);

//     return 0;


// }
// int uniqueele(vector<int>arr,int size){
//     int ans=0;
//     for(int i=0;i<arr.size();i++){
//         ans=ans^arr[i];
//     }
//     return ans ;
// }

// //using xor
// int main(){
//     int n;
//     cout<<"no of ele"<<endl;
//     cin>>n;
   
//     vector<int>arr(n);
//     cout<<"enter ele"<<endl;
//     for(int i=0;i<arr.size();i++){
//         cin>>arr[i];

//     }
//     cout<<"unique ele"<<uniqueele(arr,n)<<endl;
//     return 0;
// }


//intersection of array 
// int main(){
//     int n1;
   
//     cout<<"enter no of ele in a"<<endl;
//      cin>>n1;
//     vector<int>a(n1);
//     for(int i=0;i<a.size();i++){
//         cin>>a[i];
//     }
//     int n2;
  
//     cout<<"no.of ele in b"<<endl;
//       cin>>n2;
//     vector<int>b(n2);
//     for(int i=0;i<b.size();i++){
//         cin>>b[i];
//     }
//     vector<int>ans ;
//     for(int i=0;i<a.size();i++){
//         for(int j=0;j<b.size();j++){
//             if((a[i]^b[j])==0){
//                 ans.push_back(a[i]);
//                 b[j]=-1;


//             }
//         }
//     }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }

// }

//union of array(without duplicates)
// int main(){
//     vector<int> a={2,4,6,8};
//     vector<int> b={1,3,7};
//     vector<int> ans;
//     for(int i=0;i<a.size();i++){
//         ans.push_back(a[i]);

//     }
//     for(int i=0;i<b.size();i++){
//         ans.push_back(b[i]);
//     }
//     for(auto val:ans){
//         cout<<val<<" ";
//     }
// }

//with duplicates
// int main(){
//     vector<int> a={2,4,6,8};
//     vector<int> b={1,3,0[6,2,7};
    
//         vector<int>ans(a);
   
//     for(int i=0;i<b.size();i++){
//         bool found=false;
//         for(int j=0;j<a.size();j++){
//             if(b[i]==a[j]){
                
//               found=true;
//                 break;
//             }
//         } 
//         if(!found){
//             ans.push_back(b[i]);
//         }
       
//     }
    
//     for(auto val:ans){
//         cout<<val<<" ";
//     }
// }


//pair sum
// int main(){
//     vector<int>arr{10,20,40,60,70};
//     int sum=80;
//     for(int i=0;i<arr.size();i++){
//         for(int j=i+1;j<arr.size();j++){
//             if((arr[i]+arr[j])==sum){
//                 cout<<arr[i]<<" "<<arr[j];
//             }

//         }
//         cout<<endl;
//     }
// }


// triplet sum
// int main(){
//     vector<int>a{10,20,30,40};
//     int sum=80;
//     for(int i=0;i<a.size();i++){
//         for(int j=i+1;j<a.size();j++){
//             for(int k=j+1;k<a.size();k++){
//                 if((a[i]+a[j]+a[k])==sum){
//                     cout<<a[i]<<" "<<a[j]<<" "<<a[k];
//                 }
//             }
//         }
//     }
// }

// sort 0's and 1's 
// int main(){
//     vector<int> a={0,0,1,0,1,0,1,0,0};
//     sort(a.begin(),a.end());
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
// }

//
// int main(){
//       vector<int> a={0,0,1,0,1,0,1,0,0};
//       int i=0;
//       int j=a.size()-1;
//       while(i<=j){
//         if((a[i]==1)&&(a[j]==0)){
//             swap(a[i],a[j]);
//             i++;
//             j--;
//         }
//         else{
//             i++;
//         }
//       }
//       for(auto val:a){
//         cout<<val<<" ";
//       }

// }

//left rotate arr by 1 
// int main(){
//     vector<int>a={2,4,6,8,10};
//     int temp=a[0];
//     for(int i=0;i<a.size()-1;i++){
//         a[i]=a[i+1];
//     }
//     a[a.size()-1]=temp;
//      for(auto val:a){
//        cout<<val<<" ";
//        }
// }


//major ele in array
// int main(){
//     vector<int>a={2,2,1,2,3,2,2};
//     int n=7;
//     sort(a.begin(),a.end());
//     cout<<a[(n/2)];
// }

#include<algorithm>
int main(){
    vector<int> prices={7,1,5,3,6,4};
    int profit=0;
    int maxprofit=0;
    for(int i=0;i<prices.size();i++){
        for(int j=i+1;j<prices.size();j++){
                profit=prices[j]-prices[i];

        if(profit>maxprofit){
               maxprofit=profit;

         
        } 
        }    

    }
    cout<<maxprofit<<endl;

}
    