class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(string s : strs){
            
            ans += to_string(s.size()) + "'" + s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0 ;
        while(i < s.size()){
            int posdoc = s.find('\'', i);
            int len = stoi(s.substr(i,  posdoc - i));
            ans.push_back(s.substr(posdoc+1, len));
            i =posdoc + 1 + len;
        }
        return ans;
    }
};
