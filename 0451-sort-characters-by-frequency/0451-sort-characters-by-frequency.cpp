class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(char ch :s){
            m[ch]++;
        }
        vector<pair<int,char>> v;
        string ans="";
        
        for(auto p:m){
            v.push_back({p.second,p.first});
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();i++){
            ans.append(v[i].first,v[i].second);
        }
        return ans;
    }
};