bool solve(int n){
    if(n==0) return false;
    if(n==1 ) return true;
    // long long sqr=n*n;
    int sum=0;
    string s= to_string((1LL*n)*n);
    int size=s.length();
    if(size==1) return false;
    if(size<=n){
        size/=2;
        string left=s.substr(0,size);
        string right=s.substr(size);
         sum=stoi(left)+stoi(right);  }
  return (sum==n);
 }
void kaprekarNumbers(int p, int q) {
    bool flag=false;
    
        for(int i=p;i<=q;i++){
            if(solve(i)==1){
                   cout<<i<<" ";
                   flag=true;
            }
        }
        if(flag==false) cout<<"INVALID RANGE";
       
    }
