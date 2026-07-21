class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> m;
        unordered_set<int> s;
        for(int i: arr){
            m[i]++;
        }

        for(auto p:m){
            if(s.find(p.second)==s.end()){
                s.insert(p.second);
            }else{
                return false;
            }
        }
        return true;
    }
};