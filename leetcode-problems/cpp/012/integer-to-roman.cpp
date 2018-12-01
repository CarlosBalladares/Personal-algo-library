class Solution {
public:
    string intToRoman(int num){
        string res;
        
        res.append(intToRoman_helper(num, 4));
        res.append(intToRoman_helper(num, 3));
        res.append(intToRoman_helper(num, 2));
        res.append(intToRoman_helper(num, 1));

        return res;
    }
    
    string intToRoman_helper(int num, int ten_pow) {
        
        char ones;
        char fives;
        char ahead;
        string res;
        switch(ten_pow){
            case 1:
                ones = 'I';
                fives = 'V';
                
                ahead = 'X';
                break;
            case 2:
                ones = 'X';
                fives = 'L';
                
                ahead = 'C';
                break;
            case 3:
                ones = 'C';
                fives = 'D';
                
                ahead = 'M';
                break;
            case 4:
                ones = 'M';
                fives = '\0';
                break;
            default:
                return "";
                break;
        }
        int val = num/(pow(10, ten_pow-1));
        val = val%10;

        if(val<=3){
            res.append(val, ones);
        }else if(val ==4){
            res.append(1, ones);
            res.append(1, fives);
        }else if(val != 9){
            res.append(1, fives);
            res.append(max(0, val-5), ones);
        }else{
            res.append(1, ones);
            res.append(1, ahead);
        }
        return res;
        
    }
};