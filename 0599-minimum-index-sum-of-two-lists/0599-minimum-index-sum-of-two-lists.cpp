class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
       unordered_map<string,int> m;
       vector<string> v;
       for(int i=0;i<list1.size();i++){
        m[list1[i]]=i;
       }
       int min_sum =INT_MAX;
       for(int i=0;i<list2.size();i++){
            if(m.count(list2[i])){
                int sum=i+ m[list2[i]];
                if(sum<min_sum){
                    min_sum=sum;
                    v.clear();
                    v.push_back(list2[i]);
                }else if(sum==min_sum){
                    v.push_back(list2[i]);
                }
            }
       }
       return v;
    }
};