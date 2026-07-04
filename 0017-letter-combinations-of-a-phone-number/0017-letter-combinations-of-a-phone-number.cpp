class Solution {
    private:
    void solve(string mapping[], vector<string>&output,int index,string ans,string digits){
        if(index>=digits.length()){
            output.push_back(ans);
            return;
        }
        int element=digits[index]-'0';
        string value=mapping[element];

        for(int i=0;i<value.length();i++){
            ans.push_back(value[i]);
            solve(mapping,output,index+1,ans,digits);
            ans.pop_back();
        }

    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>output;
        if(digits.length()==0){
            return output;
        }
        int index=0;
        string ans;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(mapping,output,index,ans,digits);
        return output;
    }
};