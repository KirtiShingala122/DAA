int birthdayCakeCandles(vector<int> candles) {
int max=candles[0];
int n=0;
for(int i=1;i<candles.size();i++){
    if(max<candles[i]){
        max=candles[i];
    }
}
for(int i=0;i<candles.size();i++){
    if(max==candles[i]){
        n++;
    }
}
return n;
}
