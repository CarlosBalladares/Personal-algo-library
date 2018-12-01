class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> memo;
        vector<int>result;
        for(int i=0; i<nums.size(); i++)
            memo[target-nums[i]]=i+1;
        for(int i=0; i<nums.size(); i++){
            if(memo[nums[i]]!=0 && i!=memo[nums[i]]-1){
                result.push_back(i);
                result.push_back(memo[nums[i]]-1);
                sort(result.begin(), result.end());
                return result;
            }
        }
        return result;
    }
};