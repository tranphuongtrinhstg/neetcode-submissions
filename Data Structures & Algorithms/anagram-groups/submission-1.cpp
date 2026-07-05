class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        map<char, int> m;
        for(int i = 0 ; i < s.size(); i++){
            if(m.find(s[i]) == m.end()){ // khong tim thay 
                m[s[i]] = 1;
            } else{
                m[s[i]]++;
            }
        }

        for(int i = 0 ; i < t.size(); i++){
            if(m.find(t[i]) == m.end()){
                return false;
            }else{
                m[t[i]]--;
                if(m[t[i]] == 0){
                    m.erase(t[i]);
                }
            }
        }
        return m.empty();
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        for(string s : strs){
            string key = s ;
            sort(key.begin(), key.end());
            m[key].push_back(s);
        }
        vector<vector<string>> ans ;
        for(auto pair : m){
            ans.push_back(pair.second);
        }
        return ans;





        // vector<vector<string>> ans;
        // int k = -1;
        // vector<bool> visited(strs.size(), false);
        // for(int i = 0 ; i < strs.size(); i++){
        //     if(visited[i] == true) continue;
        //     ans.push_back({strs[i]});
        //     k++;
        //     for(int j = i+1 ; j < strs.size(); j++){
        //         if(visited[j] == false){
        //             if(isAnagram(strs[i], strs[j])){
        //                 visited[j] = true;
        //                 ans[k].push_back(strs[j]);
        //             }
        //         }
        //     }
        // }
        // return ans;
    }
};
