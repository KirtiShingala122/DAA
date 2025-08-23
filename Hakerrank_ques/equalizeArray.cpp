int equalizeArray(vector<int> arr) {
    unordered_map<int ,int> frq;
    int maxfrq=0;
        for(int i=0;i<arr.size();i++){
        frq[arr[i]]++;
        if(frq[arr[i]]>maxfrq) maxfrq= frq[arr[i]];
        
    }
    return arr.size()-maxfrq;
}
