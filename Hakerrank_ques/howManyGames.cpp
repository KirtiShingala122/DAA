int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can buy
    int count=0;
    while(true){
    if(s>=p){
        if(p>=m){
          s-=p;
        p-=d; 
         count++; }
        else if(s>=m){
            s-=m;
             count++;
 }
        else break;
    }
    else break;
    }
    return count;
}
