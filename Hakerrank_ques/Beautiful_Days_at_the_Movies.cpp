int beautifulDays(int i, int j, int k) {
   int count=0;
     for(int n=i;n<=j;n++)
     {int r=0,temp=n;
      while(temp>0){
       r= (10*r)+(temp%10);
       temp/=10;
      }
     if(abs(n-r)%k==0)
       count++;
     }
     return count;
}
