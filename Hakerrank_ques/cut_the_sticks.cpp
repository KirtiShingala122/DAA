vector<int> cutTheSticks(vector<int> arr) {
// vector<int> ans;
// sort(arr.begin(),arr.end());
//      while (!arr.empty()) {
//         ans.push_back(arr.size()); 
//         vector<int> temp;
//         for (int x : arr) {
//             if (x - arr[0] > 0) temp.push_back(x - arr[0]);
//         }
//         arr = temp;  
//     }
//     return ans;

       vector<int> ans;
      sort(arr.begin(),arr.end());
      ans.push_back(arr.size());
   for(int i=1;i<arr.size();i++){
        if(arr[i-1]!=arr[i]) {
           ans.push_back(arr.size()-i);
        }
    }
    return ans;
}
