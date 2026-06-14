class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int countone = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1)
                countone++;
        }

        if (countone == 0) return 0;
        vector<int> arr = nums;
        arr.insert(arr.end(), nums.begin(), nums.end());

        int zerocount = 0;
        for (int i = 0; i < countone; i++) {
            if (arr[i] == 0)
                zerocount++;
        }

        int ans = zerocount;

        for (int i = countone; i < countone + nums.size(); i++) {
            if (arr[i - countone] == 0)
                zerocount--;

            if (arr[i] == 0)
                zerocount++;

            ans = min(ans, zerocount);
        }

        return ans;
    }
};