class Solution {
public:
    int longestMountain(vector<int>& A) {
        if(A.size() == 0) return 0;
        int n = A.size(), maxim =0;
        vector <int> LR (n,0);
        vector <int> RL (n,0);
        
        for(int i = 1; i < n; i++)
            LR[i] = (A[i] > A[i-1]? LR[i-1]+1:0);
        
        for(int i = n-2; i >= 0; --i)
            RL[i] = (A[i] > A[i+1]? RL[i+1]+1:0);
        
        for(int i = 1; i < n-1; i++)
            maxim = max(maxim,LR[i]==0 || RL[i]==0?0: RL[i]+LR[i]+1);
        
        return maxim;
    }
};


