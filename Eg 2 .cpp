#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void func(int i, int n){
   
   // Base Condition.
   if(i>n) return;
   cout<<i<<endl;

   // Function call to print till i increments.
   func(i+1,n);

}

int main(){
  
  // Here, let’s take the value of n to be 4.
  int n ;
  cout<<"Enter the number : " <<endl;
  cin>>n;
  func(1,n);
  return 0;

}
