class Solution {
public:
    string getString(int i, int j, int k, int l){
        string s = to_string(i)+ " "+to_string(j)+ " "+to_string(k)+ " "+to_string(l);
        return s;
    }
    
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        unordered_set <string> memo;
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int i, j, k, l, sum, n = nums.size();
        for(i=0;i<n-3;i++){
            
            for(j = i+1; j< n-2; j++){
                k = j+1;
                l = n-1;
                while(k<l){
                    sum = nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum == target){
                        string id = getString(nums[i], nums[j], nums[k], nums[l]);
                        if(memo.find(id)==memo.end()){
                            memo.insert(id);
                            vector<int> quad = {nums[i], nums[j], nums[k], nums[l]};
                            res.push_back(quad);
                        }
                        k++;
                        l--;
                    }else if(sum < target){
                        k++;
                    }else{
                        l--;
                    }
                }
            }
        }
        
        return res;
    }
};