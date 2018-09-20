#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

class Solution {
public:
    
    int totalFruit(vector<int>& tree) {
        unordered_map<int, int> count;
        int largest=0, start=0;
        for(int i = 0;  i< tree.size(); i++){
            count[tree[i]]++;
            if(count.size()>2){
                largest = max( largest, i-start );
                
                while(count.size()>2){
                    int type = tree[start];
                    int type_count = count[type];
                    if(count[type]>1){
                        count[type]--;
                    }else{
                        count.erase(type);
                    }
                    start++;
                }
                
            }
        }
        largest = max( largest, tree.size()-start);
        return largest;
    }
};