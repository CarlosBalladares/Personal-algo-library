class Solution {
public:
    vector<long> prefixes;
    Solution(vector<int> w){
        prefixes.push_back(w[0]);
        for(int i = 1; i <  w.size();i++ )
            prefixes.push_back(w[i]+prefixes.back());
    }
    int pickIndex() {
        long num = rand() % prefixes.back() + 1;
        auto it = lower_bound(prefixes.begin(), prefixes.end(), num);
        return it - prefixes.begin();
    }
};
