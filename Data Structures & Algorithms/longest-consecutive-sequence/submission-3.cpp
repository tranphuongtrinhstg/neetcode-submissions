class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> temp(nums.begin(), nums.end());
        int longest = 0;
        int length;
        for(int num : nums){
            if (!temp.count(num-1)){ 
                length =1;
                int curr = num;
                while(temp.count(curr+1)){
                    length++;
                    curr++;
                }
                longest = max(longest, length);
            }
            
           
        }
        return longest;
    }
};
