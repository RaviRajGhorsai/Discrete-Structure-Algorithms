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

bool arr3[rows][cols];                         

cout<<"The boolean product of two matrices is: "<<endl;

for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        for(int k=0;k<cols;k++){
            arr3[i][j ] = arr3[i][j] || (arr1[i][k] && arr2[k][j]);
        }
    }
}

for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cout<<arr3[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}