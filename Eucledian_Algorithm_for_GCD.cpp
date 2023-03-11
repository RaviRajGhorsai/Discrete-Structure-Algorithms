#include<iostream>
using namespace std;

int gcd(int a,int b){
    int r=a%b;

    if(r==0){
        return b;
    }
    else
        return gcd(b,r);
}

int main()
{
int a,b;
int value;
cout<<"Enter value of a: "<<endl;
cin>>a;

cout<<"Enter value of b: "<<endl;
cin>>b;

cout<<"NOTE: value of a must be greater or equal to b."<<endl;

value = gcd(a,b);

cout<<"the gcd of "<<a<<" and "<<b<<" is "<<value<<endl;

return 0;
}