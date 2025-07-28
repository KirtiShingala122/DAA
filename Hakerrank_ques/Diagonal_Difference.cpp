int diagonalDifference(vector<vector<int>> arr) {
  int n = arr.size(),sum=0,sum2=0;
   
    for(int i=0; i<n; i++) {
        sum += arr[i][i];  
        
         sum2+= arr[i][n-i-1]; 
        
    }
   return abs(sum-sum2);

}
