class Solution {
public:

    int rev(int x){
    int reminder=0,rev=0;
      while (x > 0) {
    int reminder = x % 10;         
    rev = (rev * 10) + reminder;    
    x /= 10;                       
}      return rev;
    }
   
    int countDistinctIntegers(vector<int>& nums) {
         unordered_set<int> s(nums.begin(),nums.end());
    for(int i=0;i<(nums.size());i++){
     s.insert(rev(nums[i]));
    }
        
        return s.size();
    }
};  
