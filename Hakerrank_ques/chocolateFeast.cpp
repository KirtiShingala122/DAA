int chocolateFeast(int n, int c, int m) {
    int ans=n/c;
    int w=ans;
    while (w>=m) {
        int extra=w/m;
            ans+=extra;
        w=w%m+extra;
    }

    return ans;
}
