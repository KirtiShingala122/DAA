int jumpingOnClouds(vector<int> &c) {
    int count = 0;
     for (int i=0;i<c.size()-1;i++) {
        if (c[i + 2] == 0) {
            i += 1;
        } 
        count++;
    }

    return count;
}
