class Solution {
    private:
    void solve(vector<vector<int>>&output,int index,vector<int> nums){
        //base case 
        if(index>=nums.size()){
            output.push_back(nums);
            return ;
        }
        for(int j=index;j<nums.size();j++){
            swap(nums[j],nums[index]);
            solve(output,index+1,nums);
            //backtrack
             swap(nums[j],nums[index]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>output;
        int index=0;
        solve(output,index,nums);
        return output;
        
    }
};