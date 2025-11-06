#include<iostream>
using namespace std;

long long pow(long long base,long long n){
    if(n==1) return base;

    else return base*pow(base,--n);
}

int main(){
    long long base=2;
    long long n=50;
    cout<<pow(base,n);
   
}
