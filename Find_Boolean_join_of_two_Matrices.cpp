#include<iostream>
using namespace std;
int main()
{
int rows=3,cols=4;

bool arr1[rows][cols] = {{true,false,true,true},
                         {false,true,false,false},
                         {false,true,true,false}};
bool arr2[rows][cols] = {{false,true,false,false},
                         {false,false,true,false},
                         {true,false,false,true}};

cout<<"The boolean join of two matrices is: "<<endl;

for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        bool result = arr1[i][j] || arr2[i][j];
        cout<<result<<" ";
    }
    cout<<"\n";
}

return 0;
}