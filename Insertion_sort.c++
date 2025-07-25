#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "enter size::"; 
    cin >> n;
    int arr[n];
    cout<<"enter the values:";
    for (int i = 0; i < n; i++){
      cin >> arr[i];
    }
    cout<<"elements are:";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

     for(int j=1;j<n;j++)
    {
        int key=arr[j];
        int i=j-1;
        while(i>=0&&arr[i]>key)
        {
            arr[i+1]=arr[i];
            i=i-1;
            }
            arr[i+1]=key;
            cout<<"h";
    }
    cout << "\nSorted array is:" << endl;
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}
