string kangaroo(int x1, int v1, int x2, int v2) {
    string s;
    if (x2 > x1 && v2 > v1) {
        s = "NO";
    } else {
        while (true) {
            x1 += v1;
            x2 += v2;
            if (x1 == x2) {
                s = "YES";
                break;
            } else if (x1 > x2) {
                s = "NO";
                break;
            }
        }
    }
    return s;
}
