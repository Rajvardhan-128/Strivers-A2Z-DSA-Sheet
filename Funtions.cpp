
void printname(string name){
    cout<<" Hey "<<name<<endl;
}
int main (){
string name;
cin>>name;
printname(name);
string name1;
cin>>name1;
printname(name1);

// ------------------------------------------------------------------------------------------
int sum(int n1, int n2){
    int n3=n1+n2;
    cout<<n3;
}
int main (){
int n1 ,  n2 ;
cin>>n1 >>n2 ;
sum(n1,n2);
//int res=sum(n1,n2);
//cout<<res;

// -----------------------------------------------------------------------------------------------


//Pass by value 
void doit(int num){
    cout<<num<<endl;
    num+=5;
     cout<<num<<endl;
    num+=5;
     cout<<num<<endl;

}
int main (){
    int num = 10 ;
    doit(num);
     cout<<num<<endl;
    
// -----------------------------------------------------------------------------------------------------


//Pass by reference -------> taking the value from the address
void doit(string &s){
s[0]='t';
cout<<s<<endl;  

}
int main (){
    string s = "raj";
    doit(s);
    cout<<s <<endl;
   
//    output :
//    taj
//    taj

// EX : 2

void doit(int &num){
    cout<<num<<endl;
    num+=5;
     cout<<num<<endl;
    num+=5;
     cout<<num<<endl;

}
int main (){
    int num = 10 ;
    doit(num);
     cout<<num<<endl;
    
    //    output :
// 10 
// 15
// 20
// 20

//-----------------------------------------------------------------------

//  pass by reference :  " array " always go with reference 

void doit(int arr[] , int n ){
    arr[1]  +=100;
    cout<<"value inside the funtion : "<<arr[1]<<endl;
   
}
int main (){
 
 int n = 5 ;
 int arr[n];
 for (int i= 0; i<n;i++){
     cin>>arr[i];
 }

 doit(arr, n);
    cout<<"value inside the funtion: "<<arr[1]<<endl;
 
