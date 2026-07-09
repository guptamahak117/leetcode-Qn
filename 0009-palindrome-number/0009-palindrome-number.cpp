                                                                                                                                                                                                                                                                                                                    class Solution {
public:
    bool isPalindrome(int x) {
        string ans= to_string(int (x));
        int l=0;
        int h=ans.length()-1;
        while(l<=h){
            if(x<0) return false;
            else if(ans[l]!=ans[h]){
                return false;
            }
            l++;
            h--;
        }
        return true;
    }
};