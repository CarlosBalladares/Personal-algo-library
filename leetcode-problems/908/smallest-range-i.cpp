/*
  Intuition:
    Since we can add any x in range(-k, k)
    We will always choose to only lessen the difference
    between the  largest and smalles A[i]. 
    That means that the difference will be reduced my at most
    2*k. Of course if our difference is less than 2*K
    then it becomes 0.
*/

class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        if(A.size() == 1){ return 0;}
        sort(A.begin(), A.end());
        int n = A.size();
        int min_a = A[0], max_a = A[A.size()-1];
        int diff = max_a-min_a;
        
        if(diff == 0) return 0;
        
        int res = diff -(2*K);
        
        return (res<0?0:res);
    }
};