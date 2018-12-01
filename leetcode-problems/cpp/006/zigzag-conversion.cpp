/*
  Intuition
    First we cover the trivial cases. 1 row, 1 length string
    and when the string is shorter than the rows. 
    Now think about what cases we must deal with. 
    for paypalishiring 3

    p   a   h   n
    a p l s i i g
    y   i   r

    from top to bottom in the first col
    for each of the first and last we add one every 2*(numRows-1) case of p, y
    for the letters in the middle we add two one in the row and
    one after in function of the distance from the end of the row. case of a 
    be very careful with out of bounds error.

    technique: math

*/

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || s.size() == 1 || s.size() <= numRows) return s;
        
        const char* s_chars = s.c_str();
        int n = s.size();
        char sol[n+1] ={'\0'};
        int j = 0, k = 0,l = 0;
        int offset = 2*(numRows-1);
        
        for(int i = 0; i < numRows; i++){
            j = i;
            
            while( (i==0 || i==numRows-1 ) && j < n){
                sol[(l++)]= s_chars[j];
                j+=offset;
                
            }
            
            while(i > 0 && i < numRows-1 && j < n){ 
                sol[l]=s_chars[j];
                k = j + (numRows-(i+1))*2;
                if( k < n ) sol[++l]=s_chars[k];
                j+=offset;
                l++;
                
            }
            
        }
        
        return string(sol);
    }
};