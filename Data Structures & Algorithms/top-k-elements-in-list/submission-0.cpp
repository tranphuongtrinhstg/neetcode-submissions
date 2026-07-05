class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m ;
        for(int i : nums){
            m[i]++;
        }
        while(m.size() > k ){
            int min = 9999;
            int a;
            for(auto pair : m){
                if(pair.second < min){
                    min = pair.second; 
                    a = pair.first;
                } 
            }
            m.erase(a);
        }
        vector<int> ans;
        for(auto pair : m){
            ans.push_back(pair.first);
        }
        return ans;
    }
};
