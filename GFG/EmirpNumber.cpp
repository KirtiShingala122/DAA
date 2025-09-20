
class Solution {
  public:
  
  bool isprime(int n){
         if(n<=1) return false;
    for (int i=2;i*i<=n;i++) {
        if (n%i==0){
            return false;
        }
        
    }
            return true;
  }
  //
    vector<int> EmirpNumbers(int N) {
        // Code here
        vector<int> ans;
   for(int x=2;x<=N;x++){
       if(isprime(x)){
           string s=to_string(x);
           string rev=s;
           reverse(rev.begin(),rev.end());
            int rev_num=stoi(rev);
           if(rev_num!=x and rev_num <= N and isprime(rev_num) and x<rev_num){
           
               ans.push_back(x);
               ans.push_back(rev_num);
           }
           
       }
   }
       sort(ans.begin(), ans.end());

       return ans;
    }
};
