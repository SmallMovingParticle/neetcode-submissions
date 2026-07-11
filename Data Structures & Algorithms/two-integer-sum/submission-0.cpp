class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int compliment=0;
        unordered_map<int , int> mpp;
        for(int i=0 ; i<nums.size() ; i++) {
            compliment=target-nums[i];
            if(mpp.find(compliment)!=mpp.end()){
                auto it=(mpp.find(compliment));
                return {it->second , i};
            }
            mpp[nums[i]]=i;
        }
        return{};


      
    }
    
};
