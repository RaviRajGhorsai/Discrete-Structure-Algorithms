#include<iostream>
using namespace std;
int main()
{
float num;
cin>>num;
int cei = int(num)+1;
int floor = int(num);

cout<<"The ceiling value of "<<num<<" is "<<cei<<endl;
cout<<"The floor value of "<<num<<" is "<<floor<<endl;
return 0;
}