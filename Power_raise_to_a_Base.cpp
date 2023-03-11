#include<iostream>
using namespace std;

int power(int b, int p){
    if(p==0)
        return 1;
    else    
        return b*power(b,p-1);
    
}

int main()
{
int b,p;

cout<<"Enter a base number: "<<endl;
cin>>b;

cout<<"Enter a power number: "<<endl;
cin>>p;

cout<<power(b,p);

return 0;
}