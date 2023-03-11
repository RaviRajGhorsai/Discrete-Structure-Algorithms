#include<iostream>
using namespace std;

long long int fact(int n){        //it supports long intergers
    if(n==0){
        return 1;
    }
    else
        return n*fact(n-1);
}

long long int factr(int n){
    if(n==0){
        return 1;
    }
    else    
        return n*factr(n-1);
}

int main()
{
int n,r;

cout<<"Enter the value of n:"<<endl;
cin>>n;
cout<<"Enter the value of r:"<<endl;
cin>>r;

cout<<"The permutation of n and r is: "<<fact(n)/factr(r)<<endl;

return 0;
}