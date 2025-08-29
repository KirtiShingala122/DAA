
vector<int> breakingRecords(vector<int> scores) {
    int counthigh = 0, countlow = 0;
    int high = scores[0], low = scores[0];

    for(int i=1;i<scores.size();i++) {
        if(scores[i]>high) {
            counthigh++;
            high=scores[i];
        } 
        else if(scores[i]<low) {
            countlow++;
            low=scores[i];
        }
    }
    return {counthigh, countlow};
}
