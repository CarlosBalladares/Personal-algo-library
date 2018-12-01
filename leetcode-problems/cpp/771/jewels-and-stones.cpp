class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0;
        int n = S.size();
        int m = J.size();
        unordered_map<char, int> map;

        const char* s_chars = S.c_str();
        const char* j_chars = J.c_str();
        
        
        for(int i = 0; i < n; i++)
            map[s_chars[i]] ++;
        
        for(int i = 0; i < m; i++)
            count+=map[j_chars[i]];
        
        return count;
    }
};