int viralAdvertising(int n) {
    int shared=5;
    int c=0;
    for(int i=0;i<n;i++)
    {   
         c+=floor(shared/2);
         shared=(shared/2)*3;
    }
    return c;
}
