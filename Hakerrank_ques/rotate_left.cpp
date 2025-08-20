vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size();
    vector<int> rotated(n);

    for (int i = 0; i < n; ++i) {
        rotated[i] = arr[(i + d) % n];
    }

    return rotated;
}
