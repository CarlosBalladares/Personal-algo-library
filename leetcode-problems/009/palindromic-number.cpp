/*
  Intuition 
  
  You check the trivial cases first according to the
  problem statement.

  Then you use two pointers to compare last two characters
  of the int as a string until you are done with the entire string

  Techniques: two-pointer
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        if(x<10)return true;
        string s = to_string(x);
       
        int i = 0, j = s.size()-1;
        
        while(i<=j){
            if(s[(i++)]!=s[(j--)]){
                return false;
            }
        }
        
        return true;
    }
};