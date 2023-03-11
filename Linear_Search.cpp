#include<iostream>
using namespace std;

int search(int arr[],int n,int x,int i=0){
    if(i==n){
        return -1;
    }
    if(arr[i]==x){
        return i;
    }
    return search(arr,n,x,i+1);
}

int main()
{
int n;

int target;

cout<<"Enter the length of array: "<<endl;
cin>>n;
int arr[n];
cout<<"Enter the array items: "<<endl;

for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<"Enter the target value: "<<endl;
cin>>target;

int found = search(arr,n,target);

if(found==-1){
    cout<<"Your element is out of scope!!"<<endl;
}
else
cout<<"Target found in index: "<<found<<endl;

return 0;
}