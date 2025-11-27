//write a program factorial
#include <iostream>
using namespace std;

//using recursion
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}

int main() {
    int n;
    long long result = 1;

    cout << "Enter value(x): ";
    cin >> n;

    // for(int i = 1; i <= n; i++) {
    //     result *= x;
    // }

    cout << n << "!" << " = " << fact(n) << endl;

    return 0;
}


