#define print_val(message, val) cout << message << val << endl;
#define print_l(a) cout << a << endl;

class Solution {
public:
    string longestPalindrome(string s) {
        int T[1000][1000] ={0};
        
        string solution;
        int maxim = 0;
        
        int len = s.size();
        
        for(int k = 0; k < len;k++){

            for(int i = 0; i< len-k; i++){
                int j = i+k;
                
                if(k == 0){
                    T[i][j] = 1;
                }else if(k == 1 && s[i]==s[j]){
                    T[i][j] = 2;
                }else if(s[i]==s[j] && T[i+1][j-1]!=0){
                    T[i][j] =2+T[i+1][j-1];
                }
                
                if(T[i][j] > maxim){
                    solution = s.substr(i, T[i][j]);
                    maxim = T[i][j];
                }
                
            }
        }
                
        return solution;
        
    }
};