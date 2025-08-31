int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    sort(keyboards.begin(), keyboards.end());
    sort(drives.begin(), drives.end());
 
    int i=keyboards.size() - 1;
    int ans=-1;
 
    for (int j=0;j<drives.size();j++) {
        int sum=keyboards[i]+drives[j];
        
        if (sum > b) {
            i--;
            j--;
            if(i<0) break;
        } 
        else {
            ans = max(ans, sum);
        }
    }  
    return ans;
}
