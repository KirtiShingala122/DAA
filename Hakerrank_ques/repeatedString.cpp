long repeatedString(string s, long n) {
    if(s.length()==1) {
        return (s[0]=='a') ?  n: 0;
    }
long long count=0;
 long long r=n/s.length();
 long long reminder=n%s.length();
 
 for(int i=0;i<s.length();i++){
    if(s[i]=='a') count++;
    
 }
      count*=r;
      for(int i=0;i<reminder;i++){
        if(s[i]=='a') count++;
      }
 return count;
 
}
