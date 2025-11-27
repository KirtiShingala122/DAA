//write a program x^n 
#include <iostream>
using namespace std;

//using recursion
int Sumofdigit(int x)
{
    if(x==0)
    return 0;
    
        return (x%10)+Sumofdigit(x/10);

}

int main() {
    int x,a=0;
    long long result = 1;

    cout << "Enter Number (x): ";
    cin >> x;

//    while(x>0)
//    {
//      a +=x%10;
//      x=x/10;
     
//    }

    cout << Sumofdigit(x)<<endl;

    return 0;
}


