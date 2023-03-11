#include<iostream>
using namespace std;

int fibonacci(int n){      //starts from n=0 
    if(n==0){
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else    
        return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
int n;
cout<<"Enter the nth term of a fibonacci series: "<<endl;
cin>>n;

cout<<"The fibonacci number of term "<<n<<" is: "<<fibonacci(n)<<endl;

return 0;
}