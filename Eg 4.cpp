#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void func(int i, int n){
   
   // Base Condition.
   if(i<1) return;

   // Function call to print till i increments.
   func(i-1,n);
 cout<<i<<endl;
}

int main(){
  
  // Here, let?s take the value of n to be 4.
  int n ;
  cout<<"Enter the number : ";
  cin>>n;
  cout<<"Output:"<<endl;
  func(n,n);
  return 0;

}

