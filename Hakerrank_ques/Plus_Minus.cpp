void plusMinus(vector<int> arr) {
int n = arr.size();
    int pos = 0, neg = 0, zero = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;
        else
            zero++;
    }
    cout << fixed << setprecision(6);
    cout << (double)pos/n << endl;
    cout << (double)neg/n << endl;
    cout << (double)zero/n << endl;
}
