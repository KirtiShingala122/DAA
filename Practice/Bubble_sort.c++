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

      bool flag = false;

         for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = true;
                cout <<"h/n";
            }
            if(!flag) break;

        }
          
    }
    cout << "\nSorted array is:" << endl;
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}
