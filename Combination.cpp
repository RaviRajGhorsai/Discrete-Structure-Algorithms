#include<iostream>
using namespace std;

long long int factorial(int a){       //it supports long integers too
    if(a==0){
        return 1;
    }
    else    
        return a*factorial(a-1);                                                          
}

long long int nCr(int n,int r){

    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main()
{
int n,r;

cout<<"Enter the value of n: "<<endl;
cin>>n;
cout<<"Enter the value of r: "<<endl;
cin>>r;

cout<<"The combination of n and r is: "<<nCr(n,r)<<endl;

return 0;
}