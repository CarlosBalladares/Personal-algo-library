static bool sortFN(int a, int b ){return a <b;}


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int n=A.size();
        vector<int> sol(n);
        sort(A.begin(), A.end(), sortFN);
        
        int mid = floor(A.size()/2);
        int l =0, r = A.size()-1;
        int j =0, k = A.size()-1;
        
        while(r>=0){
            if(A[r] % 2 !=0){ 
                sol[k] = A[r];
                k--;
            }
            r--;
        }
        
        l = A.size()-1;
        
        while(l >= 0){
            if(A[l] % 2 ==0){ 
                sol[k] = A[l];
                k--;
            }
            l--;
        }
        
        return sol;
    }
};