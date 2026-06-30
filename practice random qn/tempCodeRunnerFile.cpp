int uniqueele(vector<int>arr,int size){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans ;
}

//using xor
int main(){
    int n;
    cout<<"no of ele"<<endl;
    cin>>n;
   
    vector<int>arr(n);
    cout<<"enter ele"<<endl;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];

    }
    cout<<"unique ele"<<uniqueele(arr,n)<<endl;
    return 0;
}