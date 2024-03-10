#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

 int arr[]={3,4,5,4,9,3,10};
 int lar=arr[0];
 int lar2=-1;
 int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]>lar){
            lar2=lar;
            lar=arr[i];
        }
        else if(arr[i]<lar2 && arr[i] > lar){
            lar2=arr[i];
        }
    }
    cout<<lar2;
    
    
    



  return 0;
}