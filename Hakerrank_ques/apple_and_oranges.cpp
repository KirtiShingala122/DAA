
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int c1=0,c2=0;
   int n1= apples.size();
   int n2=oranges.size();
        for(int i=0;i<n1;i++)
        {
           if(apples[i]+a>=s && apples[i]+a<=t) 
           c1++;
        }
         for(int i=0;i<n2;i++)
        {
           if(oranges[i]+b>=s && oranges[i]+b<=t) 
           c2++;
        }
        cout<<c1<<endl;
        cout<<c2<<endl;
}
