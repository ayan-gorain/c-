#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //Complete this function
    void printNos(int N)
    { 
        if (N > 0) {
        printNos(N - 1); 
        std::cout << N << " "; 
    } 
    }
};
int main() {

    

  return 0;
}