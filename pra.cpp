#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Animal{
    public:
void eat(){
    cout<<"eating"<<endl;
}
};
class Dog :public Animal
{
   public:
   void bark(){
    
   }
}
int main() {

  return 0;
}