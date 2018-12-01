class Solution {
public:    
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(),::ispunct), s.end());
        s.erase(remove_if(s.begin(), s.end(),::isspace), s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if(s.size()%2) s.erase(s.begin()+s.size()/2);
        return s == string(s.rbegin(), s.rend());
    }
};