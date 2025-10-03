
class Solution {
public:
    int solve(vector<int> &nums,int i){
        if(i==0) return nums[0];
        if(i==1) return max(nums[1],nums[0]);
        int taken=nums[i]+solve(nums,i-2);
        int skip=solve(nums,i-1);
        return max(taken,skip);
    }
    
    int memo_fn(vector<int> &nums,int i,vector<int> &memo){
        if(memo[i]!=-1) return memo[i];
        int taken=nums[i]+memo_fn(nums,i-2,memo);
        int skip=memo_fn(nums,i-1,memo);
        return {memo[i]=max(taken,skip)};

    }

    // int tabulation(vector<int> &nums){

    //     for(int i=2;i<nums.size();i++){
            
    //     }
    // }
    int rob(vector<int>& nums) {
        int n=nums.size(); //change n
        if(n==1) return nums[0];
        vector<int> memo(n,-1);
         memo[0]=nums[0];
         memo[1]=max(nums[0],nums[1]);
        
        return memo_fn(nums,n-1,memo); //chnage
    }
};
