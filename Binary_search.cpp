#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& arr,int target,int start,int end){
    if(start>end){
        return -1;
    }
    int mid = (start+end)/2;

    if(arr[mid]==target){
        return mid;
    }
    else if (arr[mid]<target)
    {
        return search(arr,target,mid+1,end);
    }
    else
    {
       return search(arr,target,start,mid-1); 
    }
}

int main()
{
int n;
int target;
cout<<"Enter the length of array: "<<endl;
cin>>n;

vector<int> arr;
cout<<"Enter the array items: "<<endl;
for(int i=0;i<n;i++){
   arr.push_back(i);
}

int index = search(arr, target ,0, arr.size()-1);

if(index==-1){
    cout<<"Target not Found!!"<<endl;
}
else
    cout<<"Target Found in index "<<index<<" of the array."<<endl;

return 0;
}