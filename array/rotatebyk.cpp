#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d=2;
     d=d%n;
    int temp[d];
       
       for(int i=0;i<d;i++){
           temp[i]=arr[i];
       }
        for(int i=0;i<d;i++){
           cout<<temp[i];
       }


  return 0;
}