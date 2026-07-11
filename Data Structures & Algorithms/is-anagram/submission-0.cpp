class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>mpp1;
        for(auto it: s){
            mpp1[it]++;
        }
          unordered_map<int,int>mpp2;
        for(auto it: t){
            mpp2[it]++;
        }

      
        return mpp1==mpp2;
    }
};
