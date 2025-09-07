class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]) return nums[i];
        }
        
        // unordered_set<int> s;
        // for(int x:nums){
        //     if(s.count(x)) return x;
        //     s.insert(x);
        // }
         return 0;
    }
    
};
