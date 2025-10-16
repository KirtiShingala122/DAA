
vector<int> compareTriplets(vector<int> a, vector<int> b) {
  int a1=0,b1=0;
    for(int i=0;i<3;i++) {
        if(a[i]>b[i])
            a1++;
        else if(a[i] < b[i])
            b1++;
    }
    return {a1,b1};
    

}
