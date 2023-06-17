#include <iostream>
using namespace std ;

int sum(int n){
	if (n ==0 ) return 1;
	return n * sum(n-1);
//	sum(i-1,sum+i);
}

int main (){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<sum(n);
	return 0;
}  
