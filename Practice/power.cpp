//write a program x^n 
#include <iostream>
using namespace std;

//using recursion
int pow(double x,int n)
{ 
    if(n<0)
    return 1;
    else
    return x*pow(x,n-1);

    if(n<0)
    {
        return 1/x*pow(x,n-1);
    }

}

int main() {
    int x, n;
    long long result = 1;

    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter exponent (n): ";
    cin >> n;

    // for(int i = 1; i <= n; i++) {
    //     result *= x;
    // }

    cout << x << "^" << n << " = " << pow(x,n) << endl;

    return 0;
}


