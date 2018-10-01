class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i = 0, j = people.size()-1, curr_limit, res = 0;
        int n = people.size(), curr_count;
        sort(people.begin(), people.end());
        while(i<=j){
            curr_limit = limit;
            curr_count = 0;
            while( curr_limit - people[j] >=0 && j>=0 &&curr_count<2){
                curr_limit-=people[j];
                j--;
                curr_count++;
                
            }
            while(curr_limit - people[i] >=0 && i<=n-1&&curr_count<2){
                curr_limit-=people[i];
                curr_count++;
                i++;
            }
            res++;
        }
        
        return res;
    }
};