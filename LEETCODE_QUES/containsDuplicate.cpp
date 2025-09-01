class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int x:nums){
            if(s.count(x)) return true;
            s.insert(x);
        } return false;
//         unordered_map<int,int> frq;
//         for(int x:nums){
//             frq[x]++;
//         }
//        for ( pair<int, int> x: frq) {
//     if (x.second > 1)  return true;
// }
// return false;
    }
};
