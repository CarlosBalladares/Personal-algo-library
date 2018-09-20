#define max(x, y) (((x) > (y)) ? (x) : (y))


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int start, old_start,max, n;
        const char* s_chars;
        unordered_map<char, int> count;             
        unordered_map<char, int> indxs;               
                
        max = 0;  
        start = 0;
        old_start = 0;
        n = s.size();                                      
        s_chars = s.c_str();
                
        for(int i = 0; i < n; i++){ 
            if(count[ s_chars[ i ] ] == 1){                              
                max   = max(i-start, max); 
                old_start = start;  
                start = indxs[s_chars[i]]+1;           
                for(int j = old_start; j < start; j++ )
                    count[s_chars[j]]--; 
            }
            
            count[s_chars[i]] ++;               
            indxs[s_chars[i]] = i;
            
        }
        
        return max(n-start, max);
    }
};