class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int product = 1;
        for(int i : nums){
            product *= i;
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                ans.push_back(product/nums[i]);
            }else{
                int temp = 1;
                for(int index = 0; index < nums.size(); index++){
                    if(index == i) continue;
                    temp *= nums[index];
                    
                }
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
