#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={10, 20, 30, 40, 50};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]> arr[i-1]){
            cout<<arr[i];
        }
        cout<<endl;
    }
    

  return 0;
}
