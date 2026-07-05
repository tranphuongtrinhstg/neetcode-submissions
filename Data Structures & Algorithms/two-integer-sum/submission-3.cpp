class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        // for(int i = 0 ; i < nums.size(); i++){
        //     for(int j = i + 1; j < nums.size() ; j++){
        //         if(nums[j] + nums[i] == target ){
        //             return {i,j};
        //         }
        //     }
        // }

        map<int,int> m; // gtri-index
        for(int i = 0; i < nums.size(); i++){
            if(m.find(target - nums[i]) == m.end()){
                m[nums[i]] = i;
            }else{
                return {m[target - nums[i]], i};
            }
        }
        return {};
    }
};
