#include<iostream>
using namespace std;
int main()
{
int arr1[3];
int arr2[3];

cout<<"Enter numbers in set A: \n";
for(int i=0;i<3;i++){
    cin>>arr1[i];
}

cout<<"Enter numbers in set B: \n";
for(int i=0;i<3;i++){
    cin>>arr2[i];
}

cout<<"Cartesian Product of A x B is: \n{";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<"("<<arr1[i]<<","<<arr2[j]<<")" ;
    }
    // cout<<",";
}
cout<<"}";
return 0;
}