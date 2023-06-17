
//----------------------------------------17/04/2023>>>>08:05pm-------------------------------------------------------------------

//RE>1 - Introduction to recurssion

#Recurrsion : When a funtion call itself until specified condition meet.


// Eg.1 -------------------
// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
void f(){
    cout<<"1"<<endl;
    f();
}

int main() {
    
    cout << "Welcome to Codestudio Online Compiler!!"<<endl;
    f();
    return 0;
}

// This is called the  stackoverflow (Segmentation fault) program can run it again and again . 

// Eg.2------------------------
// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int cnt=0;
void f(){
    
    if(cnt ==3){
        return;
    }
    cout<<cnt<<endl;
    cnt++;
    f();
}

int main() {
    
    // cout << "Welcome to Codestudio Online Compiler!!"<<endl;
    f();
    return 0;
}

// Base cases - you not perform the below lines ( Condition) .
// Stack space - its can be run onece yet.