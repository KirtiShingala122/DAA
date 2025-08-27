int beautifulTriplets(int d, vector<int> arr) {       
     unordered_set<int> s(arr.begin(),arr.end());
     int count=0;
     for(int x:arr){
            int sum=d+x;
              if(s.find(sum)!=s.end() and s.find(sum+d)!=s.end()) count++;
     }   
     return count;
}
