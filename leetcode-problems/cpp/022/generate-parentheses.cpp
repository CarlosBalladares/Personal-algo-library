class Solution {
public:
  
    void helper(int open, int close, int n, string pref, vector<string>&res){
      if(open==close && open ==n){
        res.push_back(pref);
      }else{
        if(open <n)
          helper(open+1, close, n, pref+"(",res );
        if(open>close)
          helper(open, close+1, n, pref+")",res );
      }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        helper(0, 0, n, "", res);
        return res;
    }
};