
static const int mod = 1e9 + 7;

class Solution {
public:
    long sumSubarrayMins(vector<int>& A) {
        int n = A.size();
        int right[n];
        int left[n];
        long sum = 0;
        stack< pair<int, int> > s1, s2;
        for(int i = 0; i < n; i++){
            int count = 1;
            while(!s1.empty() && A[i] < s1.top().first ){
                count += s1.top().second;
                s1.pop();
            }
            s1.push({A[i], count });
            left[i]= count;
        }
        
        for(int i = n-1; i >= 0; i--){
            int count = 1;
            while(!s2.empty() && A[i] <= s2.top().first ){
                count += s2.top().second;
                s2.pop();
            }
            s2.push({A[i], count });
            right[i]= count;
        }
        
        for(int i = 0; i < n; i++){
            sum =(sum + A[i] * left[i]* right[i] %mod )%mod;
        }
        
        
        return sum;
    }
};