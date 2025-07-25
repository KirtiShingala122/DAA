
    int hurdleRace(int k, vector<int> height) {
    int doses = 0;
    for(int i = 0; i < height.size(); i++) {
        if(height[i] > k) {
            int n = height[i] - k;
            if(n > doses) {
                doses = n;
            }
        }
    }
    return doses;
   }
